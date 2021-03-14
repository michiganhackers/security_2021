while :
do
	pairs=$((1 + $RANDOM % 40))
	echo $pairs > input.txt
	for k in $(seq 1 $pairs); do
		rand1=$((1 + $RANDOM % 100))
		rand2=$((1 + $RANDOM % 100))
		echo "$rand1 $rand2" >> input.txt
	done
	output=$(./algorithm < input.txt | grep Wrong)
	if [ -z "$output" ]; then
		echo $output
		exit 0
	fi
done