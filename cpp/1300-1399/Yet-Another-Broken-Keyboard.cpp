#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll total = 0;
    int n, k;
    cin >> n >> k;
    
    set<char> chars;
    string s;
    cin >> s;
    for(int i=0;i<k;i++){
        char x;
        cin >> x;
        chars.insert(x);
    }

    ll currentStreak = 0;
    for(char c : s){
        if(chars.count(c)) currentStreak++;
        else{
            total += ((currentStreak) * (currentStreak + 1))/2;
            currentStreak = 0;
        }
    }
    total += ((currentStreak) * (currentStreak + 1))/2;
    cout << total;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	int tests;
//	cin >> tests;
	//for (int i = 0; i < tests; ++i) {
		solveCase();
	//}

	return 0;
}
