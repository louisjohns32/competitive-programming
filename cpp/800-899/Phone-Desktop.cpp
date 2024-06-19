#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solveCase() {
	ll x, y;
	cin >> x >> y;

	ll res = floor((double)y / 2);
	x -= 7 * res;
	if (y % 2 == 1) {
		++res;
		x -= 11;
	}
	if (x > 0) {
		res += ceil((double)x / 15);
	}

	cout << res << '\n';

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int tests;
	cin >> tests;
	for (int i = 0; i < tests; ++i) {
		solveCase();
	}

	return 0;
}
