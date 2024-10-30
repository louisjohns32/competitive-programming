#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = 0;
	if (n == 2) {
		cout << s[0] - '0' * 10 + s[1] - '0' << "\n";
		return;
	}

	bool prev1 = false;
	bool doubledig = false;
	bool doubledigis1 = false;
	int minim = 10;

	for (int i = 0; i < n ; ++i) {
		minim = min(minim, s[i] - '0');
		if (s[i] == '0') {
			cout << 0 << "\n";
			return;
		}
		if (s[i] != '1') {
			if (prev1) {
				doubledig = true;
				if (doubledigis1) {
					ans--;
					doubledigis1 = false;
				}
			}
			prev1 = false;
			ans += s[i] - '0';
		}
		else {
			if (!doubledig && i != n-1) {
				if ((s[i + 1] == '1')) {
					ans++;
					doubledigis1 = true;
				}
			}
			prev1 = true;
		}
	}

	ans += minim == 1;
	cout << ans + minim * 9 << "\n";
	
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
