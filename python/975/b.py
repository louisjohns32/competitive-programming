import sys
import math
import bisect

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    currRes = []
    n,q = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    q = int(q)

    arr = sys.stdin.readline().rstrip().split(" ")
    queries = sys.stdin.readline().rstrip().split(" ")

    # num left * (numright+1) + numright

    # we do binary search to find answer

    for i in range(n):
        arr[i] = int(arr[i])

    
    for k in queries:
        ans = 0
        k = int(k)
        l = 0
        r = math.ceil((n+1)//2) - 1
        while l <= r:
            mid = (l+r)//2
            numSegs = mid * (n-mid) + (n-mid-1)
            if numSegs > k:
                r = mid - 1
            elif numSegs < k:
                l = mid + 1
            else:
          #      print(mid)
                ans += 2
                if mid == (n-1)/2:
                    ans-=1
                break
    #    print(ans)

        l = 0
        r = math.ceil((n+1)//2) - 1
        while l <= r:
            mid = (l+r)//2
            numSegs = (mid+1) * (n-mid-1)
            if numSegs > k:
                r = mid - 1
            elif numSegs < k:
                l = mid + 1
            else:
         #       print(mid)
                ans+= arr[mid+1] - arr[mid] - 1
                midR = n - mid - 2
                if mid != midR:
                    ans+= arr[midR+1] - arr[midR] - 1

                break
      #  print(ans)s
        currRes.append(str(ans))
    
    res.append(" ".join(currRes))



    
   

    

for i in res:
    print(i, file=sys.stdout)


