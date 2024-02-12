#!/usr/bin/env fish

set curr_brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

if ["$curr_brightness" -gt 100]