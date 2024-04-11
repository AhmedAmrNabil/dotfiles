function prompt_pwd
  # 
#    set -l icons "Downloads_ Documents_󰈙 Music_ Pictures_ btngana_~ /c"
    set -l icons "(\/Downloads\/)_/ /=(\/Documents\/)_/󰈙 /=(\/Music\/)_/ /=(\/Pictures\/)_/ /=(^\/home\/btngana\/)_~/=(^\/c)_C:=(^\/d)_D:"
    # (^[\/][c]+)+_C: 
    # (^[\/][d]+)+_D:
    # set -l icons "Downloads_ Documents_󰈙 Music_ Pictures_ /home/btngana_/~"
    set tmp $PWD'/'
    # echo $tmp
    for item in (string split "=" $icons)
        set -l item (string split "_" $item)
        set tmp (string replace -r $item[1] $item[2] $tmp)
    end

    # set tmp (string split "/" $tmp)

    if [ "$tmp[2]" = "c" ]
        set tmp[2] "C:"
        # set -e tmp[2]
        # set -e tmp[1]
    else if [ "$tmp[2]" = "d" ]
        set tmp[2] "D:"
        # set -e tmp[1]
    end
    # set tmp (string split '/' $tmp)
    # set -e tmp[-1]
    # set tmp (string join '/' $tmp)
    echo (echo $tmp | rev | cut -c2- | rev)

    # if test -z "$tmp[-1]"
    #     echo "/"
    # else
    #     echo $tmp[-1]
    # end
#
#    if test (count $tmp) -gt 3
#        echo -n "…/"
#    end
#    string join "/"  $tmp[-3] $tmp[-2] $tmp[-1]
end


