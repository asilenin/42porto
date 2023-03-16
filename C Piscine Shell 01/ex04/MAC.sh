ifconfig | awk '/ether/ {print $2}' | cat -e
