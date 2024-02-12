function fish_prompt
    set -l retc "#f38ba8"

    # set -l text_color "#fbf1c7"
    # set -l icon_color "#3c3836"
    # # set -l bg1 "#665c54"
    # # set -l bg2 "#7c6f64"
    # # set -l bg3 "#928374"
    # # set -l fg1 "#bdae93"
    # set -l bg1 "#3c3836"
    # set -l bg2 "#504945"
    # set -l bg3 "#665c54"
    # set -l fg1 "#a89984"
    # # set -l accent1 "#cc241d"
    # set -l accent1 "#d65d0e"
    # set -l accent2 "#d79921"  (get_user)

    # set -l text_color "#ECEFF4"
    # set -l icon_color "#2E3440"
    # set -l bg1 "#3B4252"
    # set -l bg2 "#434C5E"
    # set -l bg3 "#4C566A"
    # set -l fg1 "#86BBD8"
    # set -l accent1 "#06969A"
    # set -l accent2 "#33658A" 

    set -l text_color "#cdd6f4"
    set -l icon_color "#45475a"
    set -l bg1 "#313244"
    set -l bg2 "#45475a"
    set -l bg3 "#585b70"
    set -l fg1 "#f5c2e7"
    set -l accent2 "#cba6f7"

    test $status = 0; and set retc $text_color
    echo " "
    echo -n (set_color $bg1)"░▒▓"
    echo -n (set_color $text_color --background $bg1)"  "
    echo -n (set_color $bg1 --background $bg2)""
    echo -n (set_color $text_color) (prompt_pwd)" "
    echo -n (set_color $bg2 --background $bg3)""
    echo -n (set_color $text_color)(get_branch)
    echo -n (set_color $bg3 --background $fg1)""
    echo -n (set_color $icon_color)(get_language)
    echo -n (set_color $fg1 --background $accent2)""
    # echo -n (set_color $accent1 --background $accent2)""
    echo -n (set_color $icon_color) "󱑍 "(date +%I:%M)" "
    echo  (set_color $accent2 -b normal)""
    set_color $retc
    echo "❯ "
end

function get_language
  set -l fileext ""
  set -l counter (ls -1 *.cpp 2>/dev/null | wc -l)
  if [ counter -g 0]
    set -a fileext ""
    
  end
  # for file in *.cpp
  #   break
  # end
  for file in *.py
    set -a fileext ""
    break
  end
  for file in *.js
    set -a fileext ""
    break
  end
  echo "$fileext "
end

function get_branch
  # minus symbol if there are no changes detected to tracked files
  # /dev/null prevents nonsensical errors when you are on directories not tracked by git.
  if test (git status --untracked-files=no --porcelain 2> /dev/null | wc -l) -eq 0
    set branch_name (git branch --show-current 2> /dev/null)
  end
  
  if test "$branch_name" != ""
    echo "  $branch_name "
  else
    echo ""
  end
end