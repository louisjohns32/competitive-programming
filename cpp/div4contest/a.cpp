#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	string a, b;
	cin >> a >> b;
	char c = a[0];
	a[0] = b[0];
	b[0] = c;

	cout << a << ' ' << b << '\n';

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
