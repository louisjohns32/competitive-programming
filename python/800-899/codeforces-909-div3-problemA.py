import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    start_n = sys.stdin.readline()
    if int(start_n) % 3 == 0:
        res.append("Second")
    else:
        res.append("First")

for i in res:
    print(i, file=sys.stdout)
    