function restartkde --wraps='systemctl --user restart plasma-plasmashell.service' --description 'alias restartkde systemctl --user restart plasma-plasmashell.service'
  systemctl --user restart plasma-plasmashell.service $argv
        
end
