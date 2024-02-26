#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float numGames;
    cin >> numGames;
    char winner;
    int antonCount = 0;
    for (int i = 0; i < numGames; i++)
    {
        cin >> winner;
        if (winner == 'A')
        {
            antonCount++;
        }
    }

    if (antonCount > numGames / 2)
    {
        printf("Anton");
    }
    else if (antonCount < numGames / 2)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
}