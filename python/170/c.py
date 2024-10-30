import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, k = sys.stdin.readline().rstrip().split(" ")
    a = list(map(int, sys.stdin.readline().rstrip().split(" ")))
    
    n = int(n)
    k = int(k)

    a.sort()

    l = 0

    nums = set()
    curr = 0
    ans = 0
    prev = 10000000000
    for r in range(len(a)):
        if a[r] in nums:
            curr+=1
            ans = max(ans, curr)
            continue
            
        if a[r] > prev + 1:
            curr = 0
            nums.clear()
            l = r

        
        prev = a[r]
        nums.add(a[r])
        curr+=1
        if len(nums) > k:
            toRemove = a[l]
            while l < r and a[l] == toRemove:
                curr -= 1
                l+=1
            nums.remove(toRemove)
        
        ans = max(ans, curr)
    
    res.append(ans)




    
      

for i in res:
    print(i, file=sys.stdout)


