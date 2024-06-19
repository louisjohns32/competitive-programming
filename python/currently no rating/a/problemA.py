import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    arr = sys.stdin.readline().rstrip().split(" ")
    
    # loop over arr, find the lowest possible max 
    # k is going to be this max - 1
    lowest = max(int(arr[0]), int(arr[1]))
    prev = int(arr[0])
    for i in arr[1::]:
        i = int(i)
        lowest = min(lowest, max(i, prev))
        prev = i
    
    res.append(lowest - 1)

  
for i in res:
    print(i, file=sys.stdout)


