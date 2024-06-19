#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	string s;
	cin >> s;
	char prev = s[0];
	int conseqSubs = 1;
	for (auto num : s) {
		if (num != prev) {
			conseqSubs++;
		}
		prev = num;
	}

	if (conseqSubs < 3 && !(s.front() == '0' && s.back() == '1')) {
		cout << conseqSubs << endl;
		return;
	}
	cout << conseqSubs - 1 << endl;
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
