import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, m, r, c = list(map(int, sys.stdin.readline().rstrip().split(" ")))

    # calculate number of rows below

    # calculate number of cells ahead on line

    numRows = n - r

    ans = numRows * m + (m - c) + numRows * (m-1)
    res.append(ans)
    
    
      

for i in res:
    print(i, file=sys.stdout)


