#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {

    ll n;
    cin >> n;
    vector<ll> prefixSum(n), suffixSum(n);
    vector<ll> a(n);
    ll total = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        prefixSum[i] = total += a[i];
    }

    total = 0;
    for(int i = n-1; i>= 0; i--){
        suffixSum[i] = total += a[i];
    }

    map<ll, ll> seen;
    ll res = 0;
    for(int i = 0; i<n-1; i++){
        ll neededMatch = prefixSum[i]/2;
        if(prefixSum[i] % 2 == 0 && seen.count(neededMatch) && suffixSum[i+1] == neededMatch) res += seen.at(neededMatch);
        seen[prefixSum[i]] += 1;
    }

    cout << res;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	int tests;
	//cin >> tests;
	//for (int i = 0; i < tests; ++i) {
		solveCase();
	//}

	return 0;
}
