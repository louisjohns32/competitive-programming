import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    nums = sys.stdin.readline().rstrip().split(" ")

    if int(nums[0]) - int(nums[-1]) == 0:
        res.append("NO")
    else:
        res.append("YES")
        res.append(("R"*(n-2) + "B" + "R"))


   
    

for i in res:
    print(i, file=sys.stdout)


