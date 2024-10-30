import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, k = sys.stdin.readline().rstrip().split(" ")
    n = int(n)
    k = int(k)

    a = list(map(int,sys.stdin.readline().rstrip().split(" ")))
 
    
    # Binary search over possible deck sizes
    low, high = 1, sum(a) + k
    answer = 1
    
    def can_form_decks_of_size(d):
        # Try to see if we can form decks of size d
        total_needed = 0
        for cards in a:
            total_needed += min(cards, d)
        return total_needed + k >= d * n
    
    while low <= high:
        mid = (low + high) // 2
        if can_form_decks_of_size(mid):
            answer = mid  # mid is a valid answer, but try for larger sizes
            low = mid + 1
        else:
            high = mid - 1
    
    res.append(str(answer))
        



    
   

    
      

for i in res:
    print(i, file=sys.stdout)


