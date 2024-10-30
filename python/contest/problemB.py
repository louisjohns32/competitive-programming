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
    
  

    queries = sys.stdin.readline().rstrip().split(" ")

    t = 0
    nearestLeft = [0 for i in range(n)] 
    nearestRight = [0 for i in range(n)] 
    prev = -1
    for i in range(n):
        while t < len(teachers) and int(teachers[t])-1 == i:
            prev = i
            t+=1

        nearestLeft[i] = prev

    prev = -1
    t = m - 1
    for i in range(n-1, -1, -1):
        while t >= 0 and int(teachers[t])-1 == i:
            prev = i
            t-=1

        nearestRight[i] = prev

    for q in queries:
        q = int(q)
        left = nearestLeft[q-1] + 1
        right = nearestRight[q-1] + 1
        if left == 0:
            res.append(right - 1)
        elif right == 0:
            res.append(n - left) 
        else:
            res.append(math.floor(min(abs(left - (left + right)/2), abs(right - (left + right)/2))))
    

for i in res:
    print(i, file=sys.stdout)


