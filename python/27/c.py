import sys
import math

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n  = int(sys.stdin.readline().rstrip())

    used = [False] * (n+1)

    ans = []
    finalK = n
    if n % 2 == 0:
        finalK = 2**(math.ceil(math.log2(n+1))) - 1

    targetK = finalK # calc
    for i in range(n, 0, -1):
      #  print(i)
        #print(targetK)
        if i % 2 == 1:
            # AND
            # we need to let everything for targetK through
            ans.append(str(targetK))
            used[targetK] = True
        else:
            # OR
            # introduce the most sig. bit of targetK
            if targetK == 1:
                if used[5]:
                    used[3] = True
                    ans.append("3")
                    break
                used[5] = True
                ans.append("5")
                break

            x = 2**(math.floor(math.log2(targetK)))
            used[x] = True
            ans.append(str(x))
            targetK = targetK - 2**(math.floor(math.log2(targetK)))
         

  #  print(used)
    # we now need to fill the rest of ans with unused numbers
    for i in range(1, n+1):
        if not used[i]:
            ans.append(str(i))

    res.append((n, finalK, ans))

    


    
    
    
      

for n, x, ans in res:
    print(x, file=sys.stdout)
    print(" ".join(ans[::-1]), file=sys.stdout)

    """# TESTING
    seen = set()
    k = 0
    for i in range(len(ans)-1, -1, -1):
        if ans[i] in seen:
            print("FAIL")
            break
        seen.add(ans[i])
        if i % 2 != 0:
            k = k & int(ans[i])
        else:
            k = k | int(ans[i])
    
    if k != x:
        print(f'FAIL, real k: {k}')
        continue

    if len(ans) != n:
        print(f'FAIL, length: {len(ans)}')
        continue

    print("passed")
    """


