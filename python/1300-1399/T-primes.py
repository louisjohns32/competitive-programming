import sys
import math

tests = int(sys.stdin.readline())
res = []

tPrimes = set()

# sieve of eratsothnes ? w/e its called to find all primes

def countPrimes(n: int):
        isPrime =[False, False] + [True] * (n-2)
        
        for i in range(2, math.ceil(math.sqrt(n))):
            if not isPrime[i]:
                continue
            
            
            isPrime[i * i : n : i] = [False] * math.ceil(n/i - i)
            

        for i in range(len(isPrime)):
             if isPrime[i]:
                tPrimes.add(i**2)

maxNumber = 0
numbers = sys.stdin.readline().rstrip().split(" ")
for i in range(len(numbers)):
     numbers[i] = int(numbers[i])
     maxNumber = max(numbers[i], maxNumber)

countPrimes(int(math.sqrt(maxNumber+1))+1)

for number in numbers:
    if number in tPrimes:
        print("YES", file=sys.stdout)
    else:
         print("NO", file=sys.stdout)

   


