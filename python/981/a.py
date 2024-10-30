import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    
    pos = 0
    turn = 1
    while abs(pos) <= n:
        if turn % 2 == 0:
            pos -= 2 * turn - 1
        else:
            pos += 2 * turn - 1
        turn +=1

    turn -= 1
    if turn % 2 == 0:
        res.append("Kosuke")
    else:
        res.append("Sakurako ")
    
      

for i in res:
    print(i, file=sys.stdout)


