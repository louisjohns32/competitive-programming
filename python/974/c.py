import sys
import math
 
tests = int(sys.stdin.readline())
res = []
 
for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    wealth = sys.stdin.readline().rstrip().split(" ")
 
    # x = floor(n * median - sum(wealth) ) + 1
 
    if n < 3:
        res.append(-1)
        continue
 
    for i in range(n):
        wealth[i] = int(wealth[i])
    wealth.sort()
 
    if n % 2 == 1:
        median = wealth[math.floor(((n+1)//2))-1]
    else:
        median = wealth[math.floor(((n+1)//2))]
    
 
    diff = median*2 
    ans = max(0,math.floor(diff * n - (sum(wealth)))+ 1)
 
    res.append(ans)
 
 
      
 
for i in res:
    print(i, file=sys.stdout)
 