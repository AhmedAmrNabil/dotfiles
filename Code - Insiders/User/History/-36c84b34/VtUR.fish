#!/usr/bin/env fish

set arr (ddcutil getvcp 10 | string split "command value=")
echo $arr
