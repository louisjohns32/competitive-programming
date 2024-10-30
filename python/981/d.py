import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    grid = [[] for _ in range(n)]
    
    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))
    
    total = 0
    seen = set([0])
    rolling = 0
    for i in range(n):
        
            
        rolling += arr[i]
        if arr[i] == 0 or rolling in seen:
            total += 1
            seen.clear()
      
        seen.add(rolling)
        
    res.append(total)


            
    
    
      

for i in res:
    print(i, file=sys.stdout)


