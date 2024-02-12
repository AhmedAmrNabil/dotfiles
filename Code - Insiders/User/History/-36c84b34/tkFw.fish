#!/usr/bin/env fish

set curr_brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

if test ! "$curr_brightness" -ge 100 
    echo aa7a
end