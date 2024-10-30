#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	vector<int> x(3);

	for (int i = 0; i < 3; ++i) {
		cin >> x[i];
	}

	sort(x.begin(), x.end());
	
	cout << abs(x[0] - x[1]) + abs(x[2] - x[1]) << "\n";


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
