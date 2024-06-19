import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    x, y = sys.stdin.readline().rstrip().split(" ")

    x = int(x)
    y = int(y)
    
    xor_xy = format(x ^ y, 'b')
    rolling = 0
    for i in str(xor_xy)[::-1]:
        if i == "0":
            rolling +=1
        else:
            break
    
    res.append(2**rolling)
    

for i in res:
    print(i, file=sys.stdout)


