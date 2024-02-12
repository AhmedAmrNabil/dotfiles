#!/usr/bin/env fish

set arr (ddcutil getvcp 10 | string split "current value =   ")
set curr_brightness (string split "," $arr[2])[1]
echo $curr_brightness
