#include <iostream>

using namespace std;

int main()
{
    int numPeople, fenceheight;
    cin >> numPeople >> fenceheight;
    int minWidth = numPeople;
    int personHeight;
    int people[100];
    for (int i = 0; i < numPeople; i++)
    {
        cin >> personHeight;
        if (personHeight > fenceheight)
        {
            minWidth += 1;
        }
    }

    cout << minWidth;

    return 0;
}