import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, k = sys.stdin.readline().rstrip().split()
    n = int(n)
    k = int(k)
    arr = sys.stdin.readline().rstrip().split(" ")

    robinGold = 0
    ans = 0
    for gold in arr:
        if int(gold) == 0 and robinGold > 0:
            robinGold-=1
            ans+=1
        elif int(gold) >= k:
            robinGold+= int(gold)

    res.append(ans)
      

for i in res:
    print(i, file=sys.stdout)


