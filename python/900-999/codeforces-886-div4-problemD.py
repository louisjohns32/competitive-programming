# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 21:37:30 2023

@author: louis
"""

#Essentially what is the longest chain of numbers with k max difference

import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n,max_diff = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    if n == 1:
        res.append(0)
        sys.stdin.readline()
        continue
    max_diff = int(max_diff)
    nums =  sys.stdin.readline().rstrip().split(" ")
    for i in range(n):
        nums[i] = int(nums[i])
    nums = sorted(nums)
    rolling = 1
    highest = 0
   
    for i,num in enumerate(nums[1::]):
        if num - nums[i] <= max_diff:
            rolling +=1
        else:
            rolling = 1
        highest = max(rolling,highest)
        
    res.append(n-highest)
    
for i in res:
    print(i, file=sys.stdout)
    
    
        
        