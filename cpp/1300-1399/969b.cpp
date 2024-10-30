#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    ll n, m;
    ll currMax = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        currMax = max(currMax, a);
    }
    
    for(int i=0; i<m; i++){
        char op;
        ll l, r;
        cin >> op >> l >> r;
        int change;
        if(op == '+') change = 1; else change = -1;
        if(currMax >= l && currMax <= r) currMax += change;
        cout << currMax << " ";
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
