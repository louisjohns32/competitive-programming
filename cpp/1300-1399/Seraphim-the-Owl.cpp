#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll n, m;
	cin >> n >> m;

	vector<ll> a(n);
	vector<ll> b(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	ll ans = 0;
	ll pos = n - 1;
	while (pos > m - 1) {
		ans += min(a[pos], b[pos]);
		--pos;
	}

	// now pos = m - 1
	ll curr = ans;
	ans += a[pos];
	while (curr < ans && pos > 0) {
		ans = min(ans, curr + a[pos]);
		curr += b[pos];
		--pos;
	}

	ans = min(ans, curr + a[pos]);

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
