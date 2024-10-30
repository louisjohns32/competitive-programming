import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    points = set()
    n = int(sys.stdin.readline().rstrip())
    for i in range(n):
        x, y = sys.stdin.readline().rstrip().split(" ")
        points.add((int(x), int(y)))
    
    numPairs = 0
    ans = 0

    for x, y in points:
        if (x, (y+1)%2) in points:
            numPairs+=1
        if (x-1, (y+1)%2) in points and (x+1, (y+1)%2) in points:
            ans+=1
    
    res.append(int((numPairs/2)*(n-2)) + ans)
    

for i in res:
    print(i, file=sys.stdout)


