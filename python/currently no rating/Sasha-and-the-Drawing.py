import sys

from math import ceil

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    # by populating the bottom, you have n possible intersections
    # then ontop of that, you ahve another n-2 possible intersections
    n, k = sys.stdin.readline().rstrip().split(" ")
    n = int(n)#
    k = int(k)
    if k/2 <= n + n-2:
        
        # we can fill all diagonals with intersections
        res.append(ceil(k/2))
    else:
        # we need to fill some diagonals twice
        # number of coloured squares covering 2 diagonals, + the number of diagonals yet to be filled
        res.append(ceil(n + n-2 + (k -(n + n-2)*2 )))
    
    
for i in res:
    print(i, file=sys.stdout)
   