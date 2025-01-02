function mountcode --wraps='/usr/bin/guestmount -m /dev/sda -a /d/coding/wslCodingFolder/wsl2-shared.vhdx --rw /home/btngana/coding' --description 'alias mountcode /usr/bin/guestmount -m /dev/sda -a /d/coding/wslCodingFolder/wsl2-shared.vhdx --rw /home/btngana/coding'
  /usr/bin/guestmount -o uid=1000 -o gid=1000 -m /dev/sda -a /d/coding/wslCodingFolder/wsl2-shared.vhdx -w /home/btngana/coding
        
end
