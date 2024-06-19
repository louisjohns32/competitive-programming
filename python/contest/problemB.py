import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    x = int(sys.stdin.readline().rstrip())
    
    if (not (int(str(x)[0]) > 1)):
        minimux_x = ""
        for i in range(len(str(x))-1):
            minimux_x += "5"
        minimux_x = int(minimux_x)
        if x >= minimux_x*2:
            if(str(x - minimux_x * 2).find("9") == -1):
                res.append("YES")
                continue
        
    res.append("NO")
    
    

for i in res:
    print(i, file=sys.stdout)


