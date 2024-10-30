import sys
import math

tests = int(sys.stdin.readline())
res = []

chars = ["a", "e", "i", "o", "u"]

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    ans = ""

    numChars =  math.floor(n/5)
    remaining = n%5

    for i, char in enumerate(chars):
        if remaining > 0:
            remaining -=1
            ans += char * (numChars + 1)
        else:
            ans+= char * numChars
    
    res.append(ans)

for i in res:
    print(i, file=sys.stdout)


