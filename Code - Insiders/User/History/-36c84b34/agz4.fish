#!/usr/bin/env fish

set arr (ddcutil getvcp 10 | string split "current value =    ")
set curr_brightness (string split "," $arr[2])[1]

set new_brightness math 2 +2
echo $new_brightness
# ddcutil setvcp 10 $new_brightness