#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {


    // all we need to do is find the leaves, store their values in an array, then calculate score (after playtingh)

    ll n;
    cin >> n;
    map<ll, vector<ll>> adj;
    for(int i =0; i< n-1; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<char> val(n+1);
    ll totalQ = 0;
    for(int i =1; i< n+1; i++){
        cin >> val[i];
        if(val[i] == '?') totalQ++;
    } 

    set<ll> visited;
    vector<ll> leaves;
    function<void(ll)> dfs = [&](ll at) -> void {
        visited.insert(at);
        if(adj[at].size() == 1 && at != 1){
         //   cout << "LEAF AT: " << at << "\n";
            leaves.push_back(val[at]);
            return;
        }
        for(ll to : adj[at]){
            if(!visited.count(to)){
                dfs(to);
            }
        }
    };

    dfs(1);

    // now leaves is populated

    ll numZ = 0;
    ll numO = 0;
    ll numQ = 0;
    for(char c : leaves){
      //  cout << c << " ";
        if(c == '0') numZ++;
        if(c == '1') numO++;
        if(c == '?') numQ++;
    }

    bool iris = true;
    ll score = 0;
  //  cout << "A: " << numZ << numO << " | ";
    if(val[1] == '?'){
        if(numZ == numO && (totalQ - numQ )%2 == 0){
                    val[1] = '0';
            }
        else{

        
        if(numZ > numO) val[1] = '1'; else val[1] = '0';
        iris = false;
        }
    }
 //   cout << val[1] << " ";
    
    for(char c : leaves){
       // cout << c << " ";
        if(c == '?'){
            if(iris) score++;
            iris = !iris;
        }else if(c != val[1]) score++;
    }

    cout << score << "\n";


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
