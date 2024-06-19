import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, m = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    m = int(m)
    # we need m of each problem
    num = 0

    problemsMap = {"a" : 0, "b" : 0, "c" : 0, "d" : 0,
                    "e" : 0, "f" : 0, "g" : 0} # difficulty -> count
    
    for problem in sys.stdin.readline().rstrip():
        problemsMap[problem.lower()] += 1
    
    for problem in problemsMap:
        num += max(m - problemsMap[problem], 0)
    
    res.append(num)

for i in res:
    print(i, file=sys.stdout)


