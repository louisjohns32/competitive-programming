import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    x, y, k = list(map(int, sys.stdin.readline().rstrip().split(" ")))

    # top left -> bottom right
    # top right -> bottom left
    l = min(x, y)
    res.append(list(map(str, [0, l, l, 0])))
    res.append(list(map(str, [0, 0, l, l])))
      

for i in res:
    print(' '.join(i), file=sys.stdout)


