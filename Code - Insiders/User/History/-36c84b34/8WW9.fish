#!/usr/bin/env fish

set arr (ddcutil getvcp 10 | string split "current value =   ")
echo $arr[2]
