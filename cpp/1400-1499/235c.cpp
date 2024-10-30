#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    int zeroes, ones;
    cin >> zeroes >> ones;

    // for there to be an arrangement, ones >= zeroes -1, ones <= 2 * (n+1)

    if(ones < zeroes - 1 || ones > 2 * (zeroes+1)){
        cout << -1;
        return;
    }

    // an arangement is possible
    int numStart = max(0, ones - (zeroes * 2));
    for(int j=0;j<numStart;j++) cout << 1;
    ones -= numStart;
    if(zeroes) cout << 0;
    for(int i = 0; i< zeroes-1; i++){
        int numOnes = min(2, ones - (zeroes-1-i-1));
        for(int j=0;j<numOnes;j++) cout << 1;
        ones -= numOnes;
        cout << 0;
    }
    for(int j=0;j<ones;j++) cout << 1;

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
