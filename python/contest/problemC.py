import sys

tests = int(sys.stdin.readline())
res = []

for _ in range(tests):
    n = int(sys.stdin.readline().rstrip())
    original_list = sys.stdin.readline().rstrip().split(" ")
    found_list = sys.stdin.readline().rstrip().split(" ")
    m = int(sys.stdin.readline().rstrip())
    modifiers = sys.stdin.readline().rstrip().split(" ")

    # i know the resulting array, as well 
    # as the values which were assigned to an index in the original array

    # essentially its asking: 
    # are there n - m matches between modifiers and original list

    # note that if m = n, we could reach any possible list from the original, no matter the values


    matches = 0
    hash_map = {i : [] for i in set(modifiers)} # modifier value -> indices it belongs at in original lsit
    for i, value in enumerate(original_list):
        if value == found_list[i]:
            matches+=1
        if value in hash_map:
            hash_map[value].append(i)
        
        
    for i, value in enumerate(modifiers):
        # look for mismatch to replace

    
    
    
    


for i in res:
    print(i, file=sys.stdout)
