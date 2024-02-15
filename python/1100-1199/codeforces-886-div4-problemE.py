# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 22:06:55 2023

@author: louis
"""

import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    num_squares, coverage = sys.stdin.readline().rstrip().split(" ")
    num_squares = int(num_squares)
    squares = sys.stdin.readline().rstrip().split(" ")
    p_coverage = 0
    sum_of_squares = 0
    for i in squares:
        sum_of_squares += int(i)
        p_coverage += int(i)**2  
    difference = int(coverage)- p_coverage
    #solve {squares}x^2 + {sum*2}x - diff = 0
    a = num_squares
    b = sum_of_squares * 2
    c = -difference
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
    y = (-b - math.sqrt(b**2 - 4*a*c)) / (2 * a)

    
    if x > 0:
        w = x/2
    else:
        w = y/2
    
    
    
    
    res.append(int(w))
for i in res:
    print(i,file=sys.stdout)
    
