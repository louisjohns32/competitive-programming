import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    nums = sys.stdin.readline().rstrip().split(" ")
    ptotal = 0
    cptotal = 0
    ntotal = 0
    cntotal = 0
    val = False
    for i,num in enumerate(nums):
        try:
            if abs(ptotal + int(num)) == (ptotal + int(num)):
               cptotal += 1
            if abs(ntotal + int(num)) == (ntotal + int(num)):
               cntotal += 1
            if(int(nums[i+1]) < 0):
                ptotal += int(num)
                
                ntotal += int(num)
                val = False
                continue
            # next is positive
            ptotal = abs(ptotal + int(num))
            
            
            if(abs(ntotal + int(num)) > ptotal):
                val = True
                ptotal = abs(ntotal + int(num))
                cptotal = cntotal
                

            ntotal += int(num)

            val = False
            


            
        except:
            ptotal = abs(ptotal + int(num))
            ntotal = abs(ntotal + int(num))
    
    if(ntotal > ptotal):
        res.append(2**cntotal)
    else:
        if(not val and ntotal == ptotal):
            res.append(2**cptotal + 2**cntotal)
        else:
            res.append(2**cptotal)
    
        
    
   
    
for i in res:
    print(i, file=sys.stdout)


