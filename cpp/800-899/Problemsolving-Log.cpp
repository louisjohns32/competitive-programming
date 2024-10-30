#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll n;
	cin >> n;
	string contestLog;
	cin >> contestLog;

	map<char, int> problemsMap;
	char alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	for (int i = 0; i < 26; ++i) {
		problemsMap[alphabet[i]] = i + 1;
	}
	int ans = 0;
	for (auto i : contestLog) {
		problemsMap[i] -= 1;
		if (problemsMap[i] == 0) {
			++ans;
		}
	}

	cout << ans << "\n";

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
