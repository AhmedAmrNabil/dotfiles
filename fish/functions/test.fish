#!/usr/bin/env fish
set -l tmp (cygpath -w $PWD | string split -r -m3 "\\")
if test (count $tmp) -gt 3
    string join " > " "…"  $tmp[-3] $tmp[-2] $tmp[-1]
else
    string join " > "  $tmp[-3] $tmp[-2] $tmp[-1]
end

# echo $tmp

# for j in $tmp
#     echo $temp[$i]
#     set i (math $i - 1)
#     # if [ $i = -3 ]
#     #   break
#     # end
# end