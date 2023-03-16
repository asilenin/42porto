ifconfig -a | awk '/ether/ {print $2}' | cat -e
