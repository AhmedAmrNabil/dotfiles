#!/usr/bin/env fish

set arr (ddcutil getvcp 10 | grep -o -P '\d*,')