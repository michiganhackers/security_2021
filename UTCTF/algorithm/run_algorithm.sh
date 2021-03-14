for filename in $(ls file*); do
	output=$(./algorithm < $filename | grep Wrong!)
	if [ -z "$output" ]; then
		echo $filename
	fi
done