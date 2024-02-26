
import sys
import math

# ACCEPTED for some reason the cpp with the same logic failed on a test - figure out why
tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    answer = False
    previous = 0
    size = int(sys.stdin.readline())
    for i in range(size):
        numOfOnes = 0
        for num in (sys.stdin.readline()):
            if num == "1":
                numOfOnes += 1
        if previous != 0 and not answer:
            answer = True
            if numOfOnes == previous:
                res.append("SQUARE")
            else:
                res.append("TRIANGLE")
            
        previous = numOfOnes
            
for i in res:
    print(i,file=sys.stdout)
    
