import sys
import math
from collections import deque

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    
    adj = {}
    for i in range(n):
        node1, node2 = list(map(int, sys.stdin.readline().rstrip().split(" ")))
        adj[node1] = adj.get(node1, []) + [node2]
        adj[node2] = adj.get(node2, []) + [node1]
    
    queue = deque([(1,0)])

    ans = 0
    highestLeaf = float("inf")
    level = 0
    while queue:
        for _ in range(len(queue)):
            at, prev = queue.popleft()
            if len(adj[at]) == 1:
                # leaf node
                highestLeaf = min(highestLeaf, level)
                if level != highestLeaf:
                    ans+=1

            for to in adj[at]:
                if to != prev:
                    queue.append((to, at))
        level+=1

    
    #
    
            


   

    
      

for i in res:
    print(i, file=sys.stdout)


