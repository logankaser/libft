#!/bin/sh

for x in $(find src -name "*.c");
do
	ln -s $x $(basename $x)
done
