# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 21:11:36 2023

@author: louis
"""
import sys
#Limit all responses to length 10 max
#check which has highest quality

tests = int(sys.stdin.readline())
res = []
    
for _ in range(tests):
    highest_quality = [0,-1]
    n = int(sys.stdin.readline())
    for i in range(n):
        in_tup = sys.stdin.readline().rstrip().split(" ")
        if int(in_tup[0]) <=10:
            if int(in_tup[1]) > highest_quality[0]:
                highest_quality = [int(in_tup[1]),i]
    res.append(highest_quality[1] +1 )

for i in res:
    print(i, file=sys.stdout)
        
        
    