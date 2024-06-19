#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> queen; // stores column of queen i
int rec(int row) {
	// base case
	if (row == n) {
		return 0;
	}
	// pruning
	if (row > n) {
		return 0;
	}

	int res;
	vector<int> possible_columns(n);
	for (int i = 0; i < n; ++i) {
		possible_columns[i] = i + 1;
	}

	for (int i = 1; i <= n; ++i) {
		int pos = queen[i-1];
		if (pos == 0) {
			break;
		}
		else {
			possible_columns[pos + 1] = 0;
			try {
				possible_columns[pos + row - i + 1] = 0;
			}
			catch{
				
			}
			try {
				possible_columns[pos - (row - i) + 1] = 0;
			}
			catch{

			}
		}
	}

	for (auto col : possible_columns) {
		ans += rec()
	}
}

void solveCase() {
	cin >> n;
	queen.clear();
	queen.reserve(n);
	rec(1);
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
