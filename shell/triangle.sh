#!/bin/bash

read x
read y
read z

if [ $x -eq $y ] || [ $y -eq $z ] || [ $x -eq $z ]
then
    if [ $x -eq $y ] && [ $y -eq $z ] && [ $x -eq $z ]
    then
        echo "EQUILATERAL"
    else
        echo "ISOSCELES"
    fi 
fi

if [ $x -ne $y ] && [ $y -ne $z ] && [ $x -ne $z ]
then
    echo "SCALENE"
fi
