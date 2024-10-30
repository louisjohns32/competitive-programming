#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



void solveCase() {
	ll n, m;
	cin >> n >> m;

	vector<vector<ll>> v(n, vector<ll>(m));
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> v[i][j];

		}
	}


	for (ll i = 0; i < n; ++i) {
		for (ll j = 0; j < m; ++j) {
			ll highest = 0;

			if (j - 1 >= 0) {
				highest = v[i][j - 1];
			}
			if (j + 1 < m) {
				highest = max(highest, v[i][j + 1]);
			}
			if (i - 1 >= 0) {
				highest = max(highest, v[i - 1][j]);
			}
			if (i + 1 < n) {
				highest = max(highest, v[i + 1][j]);
			}
			if (highest == 0) {
				highest = 1000000000;
			}
			v[i][j] = min(v[i][j], highest);

			cout << v[i][j] << " ";
		}
		cout << "\n";
	}



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