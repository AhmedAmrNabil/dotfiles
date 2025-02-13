#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return
fastfetch

alias ls='ls --color=auto'
alias grep='grep --color=auto'
PS1='[\u@\h \W]\$ '
export PATH=$PATH:/home/btngana/.spicetify


# eval "$(starship init bash)"
# bleopt prompt_ps1_final='$(starship module character)'


PS0='\033[2A\033[2K\033[1A\033[2K\033[35m❯\033[0m $(history 1 | sed "s/^[ ]*[0-9]*[ ]*//")\n'
PROMPT_COMMAND=' PS1=$( COLUMNS=$(tput cols) fish -c "fish_prompt")'


# trap 'printf "$PS0"' SIGINT
alias ls='eza --icons --hyperlink --color=always --group-directories-first'
alias ll='ls -lh'

alias cd='z'
eval "$(zoxide init bash)"