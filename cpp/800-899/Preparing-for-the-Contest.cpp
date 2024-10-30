#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	int n, k;
	cin >> n >> k;
	int index = 0;
	vector<int> ans(n);
	for (int i = 0; i < n; ++i) {
		ans[i] = n - i;
	}

	while (k > 1) {
		swap(ans[index], ans[n - index - 1]);
		k -= 2;
		++index;
	}

	if (k == 1) {
		swap(ans[n / 2 - 1], ans[n / 2]);
	}

	for (auto i : ans) {
		cout << i << " ";
	}

	cout << "\n";
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
