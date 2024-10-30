import sys
import math

q = int(sys.stdin.readline())
res = []


narr = sys.stdin.readline().rstrip().split(" ")
karr = sys.stdin.readline().rstrip().split(" ")

for i in range(q):
    n = int(narr[i])
    k = int(karr[i])

    res.append((2 ** k) % (10**9 + 7))
    

   

    
      

for i in res:
    print(i, file=sys.stdout)


