#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void solveCase() {
	ll a, b, m;
	cin >> a >> b >> m;
	ll ans = (m/a) + 1 + (m/b) + 1;
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
