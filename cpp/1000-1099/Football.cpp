#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int n;
    scanf("%i", &n);
    char team1[10];
    char team2[10];

    int team1Count = 1;

    scanf("%s", team1);

    char input[10];

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%s", input);
        if (*input == *team1)
        {
            team1Count++;
        }
        else
        {
            strcpy(team2, input);
        }
    }
    if (team1Count > n / 2)
    {
        printf("%s", team1);
    }
    else
    {
        printf("%s", team2);
    }

    return 0;
}