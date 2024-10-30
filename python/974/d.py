import sys
import math
import heapq

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n, d, k = sys.stdin.readline().rstrip().split(" ")
    n, d, k = int(n), int(d), int(k)
    
    jobs = []
    for _ in range(k):
        l, r = sys.stdin.readline().rstrip().split(" ")
        l = int(l) - 1
        r = int(r) - 1

        jobs.append((l, r))


    jobs.sort()
    jobsStarted = [0] * n
    jobsEnded = [0] * n
    j = 0
    curr = 0
    for i in range(n):
       
        jobsStarted[i] = curr
        while j < len(jobs) and jobs[j][0] <= i:
            jobsStarted[i] +=1
            j+=1
        curr = jobsStarted[i]
    
    

    jobs.sort(key=lambda x: x[1])
    j = 0
    curr = 0
    for i in range(n):
        jobsEnded[i] = curr
        while j < len(jobs) and jobs[j][1] <= i:
            jobsEnded[i] +=1
            j+=1
        curr = jobsEnded[i]

    l = 0
 
    lowest = jobsStarted[d-1]
    highest = jobsStarted[d-1]
    brother = mother = 0
    l+=1
    for r in range(d, n):
        
        windowJobs = jobsStarted[r] - jobsEnded[l-1]
        if windowJobs > highest:
            highest = windowJobs
            brother = l
        if windowJobs < lowest:
            lowest = windowJobs
            mother = l
        
        l+=1

    res.append(f'{brother+1} {mother+1}')




    
   


      

for i in res:
    print(i, file=sys.stdout)


