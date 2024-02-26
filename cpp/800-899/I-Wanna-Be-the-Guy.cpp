#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /* in: n - number of levels
        list of indices
        second list of indices
    */
    // out: "I will become the guy" if all integers 0->n-1 inclusive are within the lists, or "Oh, my keyboard!" if not.

    int n;
    cin >> n;

    int *levels = new int[n];
    *levels = {0};
    int level;

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> level;
        levels[level - 1] = -1;
    }

    cin >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> level;
        levels[level - 1] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (levels[i] != -1)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

    return 0;
}
