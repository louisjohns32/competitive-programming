import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())

    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))



    seen = set()
    at = 0
    

    total = 0
    for i in range(n):
        if i in seen:
            continue

        currLen = 0
        at = i
        while at not in seen:
            seen.add(at)
            currLen += 1
            at = arr[at] - 1

        total += (currLen-1) // 2
       # print(total)
    
    res.append(total)
    
            
    
    
      

for i in res:
    print(i, file=sys.stdout)


