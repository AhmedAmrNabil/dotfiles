#!/usr/bin/env fish

set curr_brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

# ls -l $argv

if test "$argv[1]" = inc
    set curr_brightness (math $curr_brightness + 5)
    echo $curr_brightness
end

if test "$curr_brightness" -ge 100 
    echo aa7a
end