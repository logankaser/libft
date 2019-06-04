#!/bin/sh

for x in $(find src include -name "*.[hc]");
do
	ln -s $x $(basename $x)
done
