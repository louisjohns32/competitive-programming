# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 21:25:55 2023

@author: louis
"""

import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    column = -1
    word = ""
    for i in range(8):
        line = sys.stdin.readline().rstrip()
        if column == -1:
            for j,char in enumerate(line):
                if char != ".":
                    column = j
                    word += char
        elif line[column] != ".":
            word += line[column]
        else:
            pass
    res.append(word)
    
for i in res:
    print(i, file=sys.stdout)
            
        
            