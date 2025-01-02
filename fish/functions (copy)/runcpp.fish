function runcpp
	set app (path change-extension '' $argv[1])
	clear
	g++ -o "$app" "$app.cpp"
	./"$app"
end
