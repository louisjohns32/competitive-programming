import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    canVisit = [True] + list(map(lambda x: x == "1", sys.stdin.readline().rstrip()))

    prefix = [0] * (n+1)

    rolling = 0
    for i,visit in enumerate(canVisit):

        rolling += int(not visit)
        prefix[i] = rolling

    rolling = 0
    for i in range(n, 0, -1):
        prefix[i] -= rolling
        if canVisit[i]:
            rolling += 1
        else:
            rolling = max(0, rolling - 1)
        
        

 #   print(prefix)

    total = 0
    vSkips = 0
    nSkips = 0
    prevV = n

    for i in range(n, 0, -1):
        if not canVisit[i]:
            total += i
          
        else:
            
            # we want to skip
            available_nskips = prefix[i] #+ (min(0,  prefix[prevV] - prefix[i] - nSkips))
   #         print(f'{i}, {available_nskips}')
            if available_nskips > 0:
                nSkips += 1
            else:
                # we need to skip a visit
          #      print(i)
                vSkips += 1
            prevV = i

    i = 1
    vSkips = math.ceil(vSkips/2)
   # print(total)
  #  print(vSkips)
    while vSkips > 0:
        if canVisit[i]:
            total += i
            vSkips -= 1
        i+=1
    
    res.append(total)

   
    
    




    
      

for i in res:
    print(i, file=sys.stdout)


