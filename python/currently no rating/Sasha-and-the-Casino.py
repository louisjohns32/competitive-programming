import sys

from math import floor

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    k, x, a = sys.stdin.readline().rstrip().split(" ")
    k = int(k)
    x = int(x)
    a = int(a)

    bet_multiplier = k/(k-1)
    bet = 1
    desired_bet = 1
    bal = a
    # can we survive x losses in a row and have enough for the next bet? 
    # the most effective stratergy is the martingale stratergy
    for i in range(x+1):
        bal -= bet
        if bal < 0 :
            res.append("NO")
            break

      #  print(f"Bet: {bet}, bal: {bal}, desired bet: {desired_bet}")
        desired_bet *= bet_multiplier
        bet = floor(desired_bet)
        
    else:
        res.append("YES")

for i in res:
    print(i, file=sys.stdout)
   