import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    length = int(sys.stdin.readline())
    nums = sys.stdin.readline().rstrip().split(" ")
    l=0
    r=1
    rolling = int(nums[0])
    max_val = int(nums[0])
    while r < length:
        while (int(nums[r-1]) + int(nums[r])) % 2 != 0 or l==r:
            
            if rolling < 0:
                l = r
                r+=1
                rolling =int(nums[l])
            else:
                rolling +=int(nums[r])
                r+=1
       
            max_val = max(max_val, rolling)
            if r>=length:
                break
        l = r
        
        rolling=0

    res.append(max_val)

for i in res:
    print(i, file=sys.stdout)

    



