#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	long long n, m;
	cin >> n >> m;
	char val;
	long long hashNum;
	long long maxHash = 0;
	long long x, y, end;
	for (int i = 0; i < n; ++i) {
		hashNum = 0;
		for (int j = 0; j < m; ++j) {
			cin >> val;
			if (val == '#') {
				hashNum++;
				end = j;
			}
		}
		if (hashNum > maxHash) {
			x = i;
			y = end - (hashNum-1) /2;
			maxHash = hashNum;
		}
	}

	cout << x + 1 << ' ' << y + 1 << endl;
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
