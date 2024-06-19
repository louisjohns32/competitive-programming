#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
	// how many to cover whole row?
	// how many to cover whole column?

	long double n, m, a;
	cin >> n >> m >> a;

	long long res = (ceil(n / a) * ceil(m / a));
	cout << res;



	return 0;
}