#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // We know its rated if:
    // anyones rating changes

    // We know its not rated if:
    // The ratings are not sorted, and no ones rating changed

    // We cant tell if:
    // the ratings are sorted, and no ones rating changed

    // in: n - number of participants
    //  n lines of participants' ratings before and after

    // out rated, unrated, or maybe

    int n;
    cin >> n;

    bool inOrder = true;

    int previous = 5000; // above max rating

    int ratingBefore, ratingAfter;
    for (int i = 0; i < n; i++)
    {
        cin >> ratingBefore >> ratingAfter;
        if (ratingBefore > previous)
        {
            inOrder = false;
        }
        if (ratingBefore != ratingAfter)
        {
            printf("rated");
            return 0;
        }

        previous = ratingBefore;
    }

    if (inOrder)
    {
        printf("maybe");
    }
    else
    {
        printf("unrated");
    }

    return 0;
}