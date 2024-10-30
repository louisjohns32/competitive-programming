import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, m, q = sys.stdin.readline().rstrip().split(" ")
    teachers = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    m = int(m)
    q = int(q)
    
    david = int(sys.stdin.readline().rstrip())
    teachers[0] = int(teachers[0])
    teachers[1] = int(teachers[1])

    if min(teachers[0], teachers[1]) > david:
        res.append(min(teachers[0], teachers[1]) - 1)
    elif max(teachers[0], teachers[1]) < david:
        res.append(n - max(teachers[0], teachers[1])) 
    else:
        res.append(math.floor(min(abs(teachers[0] - (teachers[0] + teachers[1])/2), abs(teachers[1] - (teachers[0] + teachers[1])/2))))

for i in res:
    print(i, file=sys.stdout)


