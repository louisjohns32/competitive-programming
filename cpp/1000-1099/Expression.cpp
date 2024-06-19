#include <bits/stdc++.h>

using namespace std;

int maxOfPair(int x, int y) {
	return max(x + y, x * y);
}

void solveCase() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (max(maxOfPair(maxOfPair(a, b), c), maxOfPair(maxOfPair(b, c), a)));
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solveCase();

	return 0;
}