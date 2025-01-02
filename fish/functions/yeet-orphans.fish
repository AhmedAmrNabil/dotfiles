function yeet-orphans --wraps='pacman -Qdtq | sudo pacman -Rns -' --description 'alias yeet-orphans pacman -Qdtq | sudo pacman -Rns -'
  pacman -Qdtq | sudo pacman -Rns - $argv
        
end
