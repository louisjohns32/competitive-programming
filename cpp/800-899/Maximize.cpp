#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	int x;
	cin >> x;
	long long highest_factor = 1;
	for (int i = x / 2; i < x; ++i) {
		if (x % i == 0) { highest_factor = i; }
	}

	long long ans = highest_factor;
	while (ans + highest_factor < x) {
		ans += highest_factor;
	}

	cout << ans << '\n';
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
