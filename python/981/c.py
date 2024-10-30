import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))
    
    l = math.floor((n+1)/2) - 1
    r = math.ceil((n+1)/2) - 1
  #  print(l)
  #  print(r)
    while l >= 0:
        if arr[l] == arr[r]:
            l-=1
            r+=1
            continue
        before = 0
        after = 0
        if l > 0:
            if arr[l] == arr[l-1]:
                before += 1
            elif arr[r] == arr[l-1]:
                after += 1

        if arr[l+1] == arr[l]:
            before += 1
        elif arr[l+1] == arr[r]:
            after += 1
        
        if r < n-1:
            if arr[r] == arr[r+1]:
                before += 1
            elif arr[l] == arr[r+1]:
                after += 1
        if arr[r-1] == arr[r]:
            before += 1
        elif arr[r-1] == arr[l]:
            after += 1
        
        if after < before:
            arr[l], arr[r] = arr[r], arr[l]
        
        l-=1
        r+=1
    
  #  print(arr)
    ans = 0
    for i in range(n-1):
        if arr[i] == arr[i+1]:
            ans += 1
        
    
    res.append(ans)
            
    
    
      

for i in res:
    print(i, file=sys.stdout)


