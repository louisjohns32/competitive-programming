import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    s = sys.stdin.readline().rstrip()
    t = sys.stdin.readline().rstrip()
    
    # answer is len(s) + len(t) - lognest common prefix

    i = 0
    while i < len(s) and i < len(t) and s[i] == t[i]:
        i+=1
    
    if i == 0:
        i = 1
    res.append(len(s) + len(t) - i + 1)

    
      

for i in res:
    print(i, file=sys.stdout)


