#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    // guessforces - sort by sums

    ll n;
    cin >> n;
    vector<vector<ll>> a(n);

    for(int i=0; i<n;i++){
        a[i].assign(3, 0);
        cin >> a[i][1] >> a[i][2];
        a[i][0] = a[i][1] + a[i][2];
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n;i++){
        cout << a[i][1] << " " << a[i][2] << " ";
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
