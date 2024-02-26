import sys


import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    highest = 0
    lowest = 1000000000000
    n = int(sys.stdin.readline())
    nums = sys.stdin.readline().rstrip().split(" ")
    for num in nums:
        highest = max(int(num), highest)
        lowest = min(int(num), lowest)
    
    res.append(highest - lowest)

for i in res:
    print(i, file=sys.stdout)
   
      