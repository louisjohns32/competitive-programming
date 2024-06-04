import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, f, k = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    f = int(f)
    k = int(k)

    list = sys.stdin.readline().rstrip().split(" ")

    value_to_remove = list[f-1]

    list.sort(key= int,reverse=True)
    
    new_list = list[k::]
    if list.count(value_to_remove) == new_list.count(value_to_remove):
        res.append("NO")
    elif new_list.count(value_to_remove) == 0:
        res.append("YES")
    else:
        res.append("MAYBE")
    


for i in res:
    print(i, file=sys.stdout)

