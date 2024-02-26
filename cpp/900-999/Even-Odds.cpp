#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    // if k is greater than mid, it is the kth even, i.e 2k
    // else if is k - mid th odd, i.e. (k-mid) *2 - 1

    long long int n, k;

    cin >> n >> k;

    if (k <= ((n + 1) / 2))
    {
        cout << (2 * (k)) - 1 << endl;
    }
    else
    {
        cout << (2 * (k - ((n + 1) / 2))) << endl;
    }
}