#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    char color;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> color;
            if (color != 'B' && color != 'W' && color != 'G')
            {
                printf("#Color");
                return 0;
            }
        }
    }
    printf("#Black&White");

    return 0;
}
