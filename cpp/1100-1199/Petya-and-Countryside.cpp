#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // we are looking for the longest sequence of increasing, and then decreasing values.
    // we can use two pointers
    // both start at index 0
    // pointer 1 moves until the value decreases, and then increaes.
    // pointer 2 will then move to the "pivot point"/highest point and pointer 1 will move from there
    // instead of using two pointers, i can store the index at which the series switched from increasing to decreasing
    // then i can move the pointer to this index + 1 once the streak is broke

    int n;
    cin >> n;

    int highest = 0;

    int *heights = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int pointerIndex = 0;
    int previous = 0;
    int counter = 0;
    bool increasing = true;
    int pivotIndex = 0;

    while (pointerIndex != n)
    {
        // printf("Pointerindex pointing to: %d\n", heights[pointerIndex]);
        if (increasing)
        {
            counter++;
            if (previous <= heights[pointerIndex])
            {
            }
            else
            {
                increasing = false;
                pivotIndex = pointerIndex - 1;
            }
        }
        else
        {
            if (previous >= heights[pointerIndex])
            {
                counter++;
            }
            else
            {
                // reset, end of streak
                counter = 1;
                increasing = true;
                pointerIndex = pivotIndex + 1;
                previous = heights[pointerIndex];
            }
        }
        if (counter > highest)
        {
            highest = counter;
        }
        previous = heights[pointerIndex];
        pointerIndex++;
    }

    cout << highest;
}