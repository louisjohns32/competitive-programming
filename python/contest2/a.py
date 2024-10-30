import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    x, y = sys.stdin.readline().rstrip().split(" ")
    x = int(x)
    y = int(y)

    res.append(math.ceil(n/(min(x,y))))
    


    

for i in res:
    print(i, file=sys.stdout)


