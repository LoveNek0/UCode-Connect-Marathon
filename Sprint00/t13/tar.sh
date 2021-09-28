#!/bin/bash
if [ "$1" = "-c" ]; then
	tar -cf "${@:2}"
else
	if [ "$1" = "-e" ]; then
		tar -x -f $2
	else
		echo "tar.sh -c <archive.tar> <file1 file2 ...> -- For compress\ntar.sh -e <archive.tar>                   -- For extract"
	fi
fi
