import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))

    

    ans = 1

    prev = arr[0]
    if n % 2 == 0:
        for i in range(1, n, 2):
            ans = max(ans, arr[i] - arr[i-1])
    
    else:
        # we need to pick which number to "skip"
        # create suffix to store max gap starting from each element
        suffix = [1] * n
        highest = 1
        for i in range(n-1, 0, -2):
            highest = max(highest, arr[i] - arr[i-1])
            suffix[i-1] = highest
      #  print(suffix)

        for i in range(1, n, 2):
            ans = max(ans, min(arr[i] - arr[i-1], suffix[i]))


        

    res.append(ans)

for i in res:
    print(i, file=sys.stdout)


