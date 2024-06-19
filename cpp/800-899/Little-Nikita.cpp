#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	long long n, m;
	cin >> n >> m;

	if (n >= m && (n - m) % 2 == 0) {
		cout << "Yes" << '\n';
		return;
	}
	cout << "No" << '\n';
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
