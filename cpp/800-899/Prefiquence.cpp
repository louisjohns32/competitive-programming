#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solveCase() {
	int n, m;
	cin >> n >> m;

	string a, b;
	cin >> a >> b;
	
	int aptr = 0;
	int bptr = 0;
	
	while (aptr < n && bptr < m) {
		while (a[aptr] != b[bptr] && bptr < m) {
			++bptr;
		}
		++bptr;
		++aptr;
	}

	if (bptr == m + 1) {
		--aptr;
	}

	cout << aptr << '\n';

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
