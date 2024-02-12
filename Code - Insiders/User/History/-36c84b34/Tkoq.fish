#!/usr/bin/env fish

set curr_brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

set new_brightness (math $curr_brightness + 10)
echo $new_brightness
# ddcutil setvcp 10 $new_brightness