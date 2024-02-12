#!/usr/bin/env fish

set brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

# ls -l $argv

if test "$argv[1]" = inc
    set curr_brightness (math $curr_brightness + 5)
    echo $curr_brightness
end

if test "$argv[1]" = dec
    set curr_brightness (math $curr_brightness - 5)
    echo $curr_brightness
end

if test "$curr_brightness" -le 0
    set brightness
end