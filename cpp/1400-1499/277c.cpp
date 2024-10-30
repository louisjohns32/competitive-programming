#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {

    ll m, s;
    cin >> m >> s;

    // greedy? 

    // for min, at each digit I pick the smallest number such that I can still achieve the target
    
    // I can achieve the target if: current sum + digit + 9 * (m - i - 1) <= target
    if(s == 0){
        if(m == 1) cout << 0 << " " << 0; else cout << -1 << " " << -1;
        return;
    }

    if(s > 9 * m){
        cout << -1 << " " << -1;
        return;
    }

    // minimum:
    vector<char> mini(m);
    int currSum = 0;
    int target = s;
    int neededSum = s - currSum;
    int maxTargetAfter = 9 * (m -1);
    int digit = max(1, neededSum - maxTargetAfter);
    s-=digit;
   // mini[0] = char(digit);
    cout << digit;
    for(int i=1; i<m; i++){
        int neededSum = s - currSum;
        int maxTargetAfter = 9 * (m - i - 1);
        int digit = max(0, neededSum - maxTargetAfter);
        s-=digit;
       // mini[i] = char(digit);
        cout << digit;
    }
    cout << " ";
    // maximum:
    vector<char> maxi(m);
    s = target;
    for(int i=0; i<m; i++){
        int neededSum = s - currSum;
        int digit = min(9, neededSum);
        s-=digit;
        //maxi[i] = char(digit);
        cout << digit;
    }

    

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
