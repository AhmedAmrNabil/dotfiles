function update_grub --wraps='sudo grub-mkconfig -o /boot/grub/grub.cfg' --description 'alias update_grub sudo grub-mkconfig -o /boot/grub/grub.cfg'
  sudo grub-mkconfig -o /boot/grub/grub.cfg $argv
        
end
