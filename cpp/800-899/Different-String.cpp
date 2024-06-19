#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	string s;
	cin >> s;

	char prev = s.at(0);
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] != prev) {
			cout << "YES" << endl;
			cout << s.substr(0, i-1) << s[i] << prev;
			if (i + 1 != s.length()) {
				cout << s.substr(i + 1,s.length() - i - 1);
			}
			cout << endl;
			return;
		}
		prev = s[i];
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
