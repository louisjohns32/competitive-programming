import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    arr = sys.stdin.readline().rstrip().split(" ")

    max1 = max2 = 0
    for i in range(n):
        if i % 2 == 0:
            max1 = max(max1, int(arr[i]))
        else:
            max2 = max(max2, int(arr[i]))
    
    res.append(max(max1 + math.ceil(n/2), max2 + math.floor(n/2)))
   

    
      

for i in res:
    print(i, file=sys.stdout)


