#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	int x, y;
	cin >> x >> y;
	cout << min(x, y) << ' ';
	cout << max(x, y) << endl;
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

