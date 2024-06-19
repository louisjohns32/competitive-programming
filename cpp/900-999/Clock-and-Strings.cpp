#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	// we need one of c,d to be in range(a,b), and one to be outside the range
	if (c < max(a,b) && c > min(a,b)) {
		if (d > max(a, b) || d < min(a, b) ){
			cout << "YES" << endl;
			return;
		}
	}
	else {
		if (d < max(a, b) && d > min(a, b)) {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;

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
