#!/usr/bin/env fish

set curr_brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

if test $argv[2] = inc
    set curr_brightness (math $curr_brightness + 5)
end

if test ! "$curr_brightness" -ge 100 
    echo aa7a
end