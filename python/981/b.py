def solve():
    t = int(input())  # Number of test cases
    for _ in range(t):
        n = int(input())  # Length of the line of students
        a = list(map(int, input().split()))  # Topics of interest of the students

        # Step 1: Calculate initial disturbance
        initial_disturbance = 0
        for i in range(n - 1):
            if a[i] == a[i + 1]:
                initial_disturbance += 1

        # Step 2: Special case handling
        if initial_disturbance == 0:
            # No disturbance already, can't reduce further
            print(0)
            continue

        # Step 3: Check for reducible disturbances
        first = last = -1
        for i in range(n - 1):
            if a[i] == a[i + 1]:
                if first == -1:
                    first = i
                last = i

        # If the first and last disturbance can be swapped within a small region, min disturbance can be 1
        if last - first <= 2:
            print(1)
        else:
            print(2)

# Run the solution
solve()
