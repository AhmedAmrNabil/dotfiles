#!/usr/bin/env fish

# set brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')

# # ls -l $argv

# if test "$argv[1]" = inc
#     set brightness (math $brightness + 5)
#     # echo $brightness
# end

# if test "$argv[1]" = dec
#     set brightness (math $brightness - 5)
#     # echo $brightness
# end
# r
# if test "$brightness" -le 0
#     set brightness 0
# end
# if test "$brightness" -ge 100
#     set brightness 100
# end

# ddcutil setvcp 10 $brightness

set brightness (ddcutil getvcp 10 | grep -Po '\d*,' | grep -Eo '[0-9]' | tr -d '\n')
echo $brightness
if test "$brightness" -gt 0
    ddcutil --display 1 setvcp 10 0
else
    echo a7a
    ddcutil --display 1 setvcp 10 100
end