#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    char letter;

    for (int i = 0; i < tests; i++)
    {
        int aCount = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> letter;
            if (letter == 'A')
            {
                aCount++;
            }
        }
        if (aCount > 2)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }

    return 0;
}