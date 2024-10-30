#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
    // each even number has one multiple of three, and one non multiple of three adjacent
    
    int l, r;
    cin >> l >> r;
    if(l%2 == 0) l+=1;
    if(r%2 == 0) r-=1;
    cout << ((r-l+1)/2 + 1)/2 << "\n";
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
