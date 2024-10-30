import sys
import math
from collections import deque


IN = sys.stdin

    


def solve():
    n = int(IN.readline().rstrip())
    arr = list(map(int, IN.readline().rstrip().split(" ")))
    valids = {} 

   
    for i in range(n):
        num = arr[i]
        s = num + i
        e = num + i + i
        if e > s:
            t = valids.get(s, [])
            t.append(e)
            valids[s] = t
   # print(valids)
    
    ans = n
    stack = [n]
    seen = set(stack)

    while stack:
        at = stack.pop()
        ans = max(ans, at)
        tos = valids.get(at, [])
        for to in tos:
            if to not in seen:
                stack.append(to)
                seen.add(to)
        


    return ans

    
def main():
    OUT = sys.stdout
    
    res = []
    tests = int(IN.readline())
    for _ in range(tests):
        res.append(str(solve()))

    print('\n'.join(res), file=OUT)

main()
