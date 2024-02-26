#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }
    printf("%d", t);
    if (t == 10)
    {
        for (int i = 0; i < n - 2; i++)
        {
            printf("0");
        }
    }
    else
    {

        for (int i = 0; i < n - 1; i++)
        {
            printf("0");
        }
    }
}
