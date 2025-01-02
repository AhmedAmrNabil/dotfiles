function wsl-mount --wraps='guestmount --add /c/arch/ext4.vhdx --inspector --ro /home/btngana/wsl' --description 'alias wsl-mount guestmount --add /c/arch/ext4.vhdx --inspector --ro /home/btngana/wsl'
  guestmount --add /c/arch/ext4.vhdx --inspector --ro /home/btngana/wsl $argv
        
end
