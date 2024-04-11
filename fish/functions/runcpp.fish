function runcpp
	set app (path change-extension '' $argv[1])
	clear
	mkdir -p bin
	g++ -o "./bin/$app" "$app.cpp"
	./"bin/$app"
end
