import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    ratings = sys.stdin.readline().rstrip().split(" ")

    ans = 0
    for i in range(n-2):
        ans += int(ratings[i])

    ans -= int(ratings[n-2])
    ans += int(ratings[n-1])

    res.append(ans)     

for i in res:
    print(i, file=sys.stdout)


