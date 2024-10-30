#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll a, b, c;
	cin >> a >> b >> c;

	ll ans = a;
	ans += b / 3;
	if ((b % 3) != 0) {
		c -= (3 - (b % 3));
		++ans;
	}
	
	if (c >= 0) {
		ans += (ceil((double)c / 3));
	}
	else {
		ans = -1;
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
