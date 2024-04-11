if status is-interactive
    # Commands to run in interactive sessions can go here
    export "MICRO_TRUECOLOR=1"
    export "EDITOR=micro"
    zoxide init --cmd cd fish | source
end

function fish_user_key_bindings
    # bind --preset -k enter repaint_and_execute
    bind \r repaint_and_execute
    bind \cC repaint_only
end
