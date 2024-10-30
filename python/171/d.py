import sys
import math
from functools import cache

res = []
n, m = sys.stdin.readline().split(" ")
n, m = int(n), int(m)

game = list(map(int, sys.stdin.readline().rstrip().split(" ")))

# two decisions at each 0: take str or take int

totalPts = [0] * len(game)

rolling = 0
for i,num in enumerate(game):
    if num == 0:
        rolling+=1
    totalPts[i] = rolling


@cache
def rec(i, strength):
    if i >= len(game):
        return 0
    
    intellect = totalPts[i] - strength

    
    
    ans = 0
    while i < len(game) and game[i] != 0:
        if game[i] < 0:
            # strength check
            if abs(game[i]) <= strength:
                ans +=1
        else:
            # int check
            if game[i] <= intellect:
                ans += 1
        i+=1
    if i >= len(game):
        return ans
    if game[i] == 0:
        # two choices - intellect or strength increment
        return ans + max(rec(i+1, strength+1), rec(i+1, strength))
           

res.append(rec(0, 0))

    
      

for i in res:
    print(i, file=sys.stdout)


