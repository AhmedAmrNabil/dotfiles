function prompt_pwd
  # 
#    set -l icons "Downloads_ Documents_󰈙 Music_ Pictures_ btngana_~ /c"
    set -l icons "Downloads_ Documents_󰈙 Music_ Pictures_ /home/btngana_~"
    set tmp $PWD
    for item in (string split " " $icons)
        set -l item (string split "_" $item)
        set tmp (string replace $item[1] $item[2] $tmp)
    end

    set tmp (string split "/" $tmp)

    if [ "$tmp[2]" = "c" ]
        set tmp[2] "C:"
        set -e tmp[1]
    else if [ "$tmp[2]" = "d" ]
        set tmp[2] "D:"
        set -e tmp[1]
    end
    echo $tmp[-1]
#
#    if test (count $tmp) -gt 3
#        echo -n "…/"
#    end
#    string join "/"  $tmp[-3] $tmp[-2] $tmp[-1]
end


