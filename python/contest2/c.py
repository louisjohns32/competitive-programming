import sys
import math
from collections import deque

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    
    
    t = ""
    
       
    while len(t) < n:
        print("? " + t + "0", file=sys.stdout)
        sys.stdout.flush()
        response = sys.stdin.readline().rstrip()
        

        if response == "1":
            t = t + "0"
            if len(t) == n:
                print("! " + t, file=sys.stdout)
                sys.stdout.flush()
                t = t + "0"
                break
            
        
        else:
            
            print("? " + t + "1", file=sys.stdout)
            sys.stdout.flush()
            response = sys.stdin.readline().rstrip()
            if response == "1":
                t = t + "1"
                if len(t) == n:
                    print("! " + t, file=sys.stdout)
                    sys.stdout.flush()
                    t = t + "0"
                    break
                
            else:
                break
    
    while len(t) < n:
        print("? " + "0" + t, file=sys.stdout)
        sys.stdout.flush()
        response = sys.stdin.readline().rstrip()
        

        if response == "1":
            t = "0" + t
            if len(t) == n:
                print("! " + t, file=sys.stdout)
                sys.stdout.flush()
                break
            
        
        else:
            if len(t) == n-1:
                response = "1"
            else:
                print("? " + "1" + t, file=sys.stdout)
                sys.stdout.flush()
                response = sys.stdin.readline().rstrip()
            if response == "1":
                t = "1" + t
                if len(t) == n:
                    print("! " + t, file=sys.stdout)
                    sys.stdout.flush()
                    break
                
            else:
                break

    
    
            
        
    

