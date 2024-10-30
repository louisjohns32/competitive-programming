#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll modu = gcd(a, b);
    vector<ll> c(n);
    for(int i=0; i<n; i++){
        cin >> c[i];
        c[i] = c[i] % modu;
    }

    sort(c.begin(), c.end());

    ll highest = 0;
    for(int i=1; i<n; i++){
        highest = max(highest, c[i] - c[i-1]);
    }
    highest = max(highest, c[0] + modu - c[n-1]);
    cout << modu - highest << "\n";

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
