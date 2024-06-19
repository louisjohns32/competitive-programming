#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	int n;
	cin >> n;
	vector<ll> x(n - 1);
	for (int i = 0; i < n - 1; ++i) {
		cin >> x[i];
	}

	vector<ll> ans(n);
	ans[0] = x[0] + 1;
	
	for (int i = 1; i < n - 1; ++i) {
		ans[i] = x[i - 1];
		while (ans[i] <= x[i]) {
			ans[i] += ans[i - 1];
		}
		
	}

	ans[n - 1] = x[n - 2];
	cout << ans[0];
	for (vector<ll>::iterator it = ans.begin() + 1;  it != ans.end(); ++it) {
		cout << ' ' << *it;
	}
	cout << '\n';
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
