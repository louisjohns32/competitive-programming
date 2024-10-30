import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n  = int(sys.stdin.readline().rstrip())

    if n == 1 or n == 3:
        res.append("-1")
        continue

    if n % 2 == 0:
        res.append("3" * (n-2) + "66")
    else:
        res.append("3" * (n-4) + "6366")    
    


    
    
    
      

for i in res:
    print(i, file=sys.stdout)


