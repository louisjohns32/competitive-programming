import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, k = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    k = int(k)

    if k % 2 == 0:
        numOdd = k/2
        
    else:
        if n % 2 == 0:
             numOdd = (k-1)/2
        else:
            numOdd = ((k-1)/2) + 1
        
    if numOdd % 2 == 0:
        res.append("YES")
    else:
        res.append("NO")

      

for i in res:
    print(i, file=sys.stdout)


