'use strict';

const default_color_schemes = {
	dark: true,
	light: true,
	system: false,
	chrome: false,
}

const color_schemes = [
	"dark",
	"light"
]
var selected_scheme = -1;

// We need detection for system color scheme
function detectDarkScheme() {
	return window.matchMedia("(prefers-color-scheme: dark)").matches;
}

function updatePrefs({ include }) {
	const value = color_schemes[selected_scheme]
	color_schemes.splice(0, color_schemes.length, ...Object.keys(default_color_schemes).filter(scheme => include[scheme]))
	updateScheme({ value })
}

function setBadge() {
	chrome.chromeAction.setTitle({
		title: `Change color scheme to ${color_schemes[(selected_scheme + 1) % color_schemes.length]}`
	});
	const is_dark = detectDarkScheme();
	chrome.chromeAction.setIcon({
		path: {
			48: `icons/${color_schemes[selected_scheme]}_48x48.png`,
			96: `icons/${color_schemes[selected_scheme]}_96x96.png`,
		}
	});
}

function updateScheme({ value }) {
	// determine a guess for where we are in the list and update the badge.
	// if the value is in the list, EZ
	selected_scheme = color_schemes.indexOf(value);
	// fall back to the correct basic color scheme, as that’s all we can smartly detect
	if (selected_scheme < 0) {
		const basic = detectDarkScheme() ? "dark" : "light";
		selected_scheme = color_schemes.indexOf(basic);
	}
	// the scheme is not in the list, and we want an inherited scheme, so take the other one
	if (selected_scheme < 0) {
		selected_scheme = color_schemes.indexOf(color_schemes.includes('chrome') ? 'chrome' : 'system');
	}
	// this should never happen
	if (selected_scheme < 0) {
		selected_scheme = 0;
	}
	setBadge();
}

function cycleScheme(tabId) {
	selected_scheme = (selected_scheme + 1) % color_schemes.length;
	chrome.chromeSettings.overrideContentColorScheme.set({ value: color_schemes[selected_scheme] });
}

Promise.all([
	chrome.storage.local.get({ include: default_color_schemes }).then(updatePrefs),
	chrome.chromeSettings.overrideContentColorScheme.get({}).then(updateScheme),
]).then(() => {
	chrome.chromeSettings.overrideContentColorScheme.onChange.addListener(updateScheme);
	chrome.runtime.onMessage.addListener(updatePrefs);
	chrome.chromeAction.onClicked.addListener(cycleScheme);
}).catch(console.error);

chrome.runtime.onInstalled.addListener(({ reason, temporary }) => {
	if (reason === 'install') {
		chrome.storage.local.set({ include: default_color_schemes })
	}
});
