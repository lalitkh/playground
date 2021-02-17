#!/usr/bin/env bash

n=1

while [ $n -le 100 ]
do
    if [ $(( $n % 2 )) -ne 0 ]
    then
        echo $n
    fi
    ((n++))
done