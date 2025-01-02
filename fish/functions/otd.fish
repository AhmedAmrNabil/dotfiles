function otd --wraps='systemctl --user restart opentabletdriver' --description 'alias otd systemctl --user restart opentabletdriver'
  systemctl --user restart opentabletdriver $argv
        
end
