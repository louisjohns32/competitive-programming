import sys
import math
import heapq

tests = int(sys.stdin.readline())
res = []

modu = 10**9 + 7

for _ in range(tests):
    n  = int(sys.stdin.readline().rstrip())

    arr = list(map(int, sys.stdin.readline().rstrip().split(" ")))

    # keep minHeap of avaible even numbers,
    # greedily pick smallest even number (if greater than current number) and multiply
    
    ans = []

    minHeap = []
    heapq.heapify(minHeap)

    total = 0
    for num in arr:
        total += num
        while minHeap and minHeap[0][0]  < num:
         
            total -= num
            base, even = heapq.heappop(minHeap)
            
            while even != base:
                num = (num * 2) % modu
                total -= even//2
                even = even //2
            
            total = (total + num) % modu
        
        

        if num % 2 == 0:
            i = num
            while i % 2 == 0:
                i = i // 2

            heapq.heappush(minHeap, (i, num))
        
        ans.append(str(total%modu))
    
    res.append(ans)



    
    
      

for ans in res:
    print(' '.join(ans), file=sys.stdout)


