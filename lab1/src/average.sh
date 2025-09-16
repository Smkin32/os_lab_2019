#!/bin/bash
sum=0
count=0
read nums
for var in $nums
do
((sum += var))
((count++))
done
echo "$(($sum / $count)) $count" >&1 
