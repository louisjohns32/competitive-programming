#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
   // cout << "AAA";
    ll n, m;
    cin >> n >> m;

    vector<ll> game(n);
    vector<ll> totalPts(n);
    int rolling = 0;
    for(int i=0;i<n;i++){
        cin >> game[i];
        if(game[i] == 0) rolling++;
        totalPts[i] = rolling;
    }
 
    map<vector<ll>, ll> memo;
    function<ll(ll, ll)> rec = [&](ll i, ll strength) -> ll {
        
        if(i>= game.size()) return 0;

        if(memo.count({i, strength})) return memo[{i, strength}];
        vector<ll> memoKey = {i, strength};

        ll intellect = totalPts[i] - strength;

        ll ans = 0;
        while(i<game.size() && game[i] != 0){
            if(game[i] < 0){
                // strenght check
                if(abs(game[i]) <= strength) ans++;
            }
            else{
                if(abs(game[i]) <= intellect) ans++;
            }
            i++;
        }
        memo[memoKey] = ans;
        if(i>= game.size()) return ans;
        else{
            memo[memoKey] += max(rec(i+1, strength+1), rec(i+1, strength));
        }
        return memo[memoKey];

    };



    cout << rec(0,0);

}

int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	//int tests;
	//cin >> tests;
	//for (int i = 0; i < tests; ++i) {
		solveCase();
	//}

	return 0;
}
