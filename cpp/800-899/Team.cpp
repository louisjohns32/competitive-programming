#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int rolling = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c; // int representing if each person is sure
        cin >> a >> b >> c;
        if (a + b + c > 1)
        {
            rolling++;
        }
    }

    cout << rolling;
}