# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 21:03:17 2023

@author: louis
"""

import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    a,b,c = sys.stdin.readline().rstrip().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    if a + b >= 10:
        res.append("YES")
    elif a +c >= 10:
        res.append("YES")
    elif b + c >= 10:
        res.append("YES")
    else:
        res.append("NO")
for i in res:
    print(i, file=sys.stdout)