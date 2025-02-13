if status is-interactive
    # Commands to run in interactive sessions can go here
    set --unexport COLUMNS
    set --unexport LINES
    export "MICRO_TRUECOLOR=1"
    export "EDITOR=micro"
    zoxide init --cmd cd fish | source
    if uwsm check may-start
    # if uwsm check may-start && uwsm select
        exec systemd-cat -t uwsm_start uwsm start default
    end
end

function fish_user_key_bindings
    # bind --preset -k enter repaint_and_execute
    bind \r repaint_and_execute
    bind \cC repaint_only
end

fish_add_path /home/btngana/.spicetify
