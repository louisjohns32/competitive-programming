#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}

	int ans = 0;
	int rolling = 0;
	int highestB = 0;
	for (int i = 0; i < k && i < n; ++i) {
		rolling += a[i];
		highestB = max(highestB, b[i]);
		ans = max(ans, rolling + highestB * (k - i - 1));
	}

	cout << ans << "\n";
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
