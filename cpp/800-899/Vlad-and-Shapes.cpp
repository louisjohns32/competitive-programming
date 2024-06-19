#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    int size;
    int number;
    int numOfOnes;
    int previous = 0;
    int row;

    int *res = new int[tests];
    *res = {0};

    for (int i = 0; i < tests; i++)
    {
        // we can the first row of 1s
        // then check the number of 1s in the row below it
        // if there is a different number of 1s, it is a triangle
        // else it is a square

        cin >> size;
        for (int j = 0; j < size; j++)
        {
            // printf("NEXT ROW\n");
            numOfOnes = 0;
            cin >> row;
            for (int k = 0; k < size; k++)
            {
                number = row / (int)(pow(10, size - 1 - k)) % 10;
                //  printf("NUMBER = %d\n", number);
                if (number == 1)
                {
                    numOfOnes++;
                }
            }
            if (previous != 0)
            {
                if (previous == numOfOnes)
                {
                    res[i] = 0;
                }
                else
                {
                    res[i] = 1;
                }
            }
            else
            {
                //  printf("NUMBER OF ONES = %d", numOfOnes);
                previous = numOfOnes;
            }
        }
        previous = 0;
    }

    for (int i = 0; i < tests; i++)
    {
        // printf("%d", res[i]);
        if (res[i] == 1)
        {
            printf("TRIANGLE\n");
        }
        else
        {
            printf("SQUARE\n");
        }
    }

    delete res;

    return 0;
}