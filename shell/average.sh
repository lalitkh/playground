#!/bin/bash

read n 

sum=0

for i in $(seq 1 $n);
do
    read a
    sum=$((sum+a))
done

printf "%.3f" $(echo "$sum/$n" | bc -l)
