#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    map<ll, vector<ll>> valids;


    for(int i=1;i<n;i++){
        ll num = arr[i] + i;
        valids[num].push_back(num + i);
    }

    set<ll> seen;
    function<void(ll)> dfs = [&](ll at) -> void {
        if(seen.count(at)) return;
        seen.insert(at);
        for(ll to : valids[at]) dfs(to);
    };

    dfs(n);
    cout << *seen.rbegin() << "\n";

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