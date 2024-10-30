#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll n, m;
	cin >> n >> m;

	string s;
	cin >> s;

	vector<int> ind(m);

	for (int i = 0; i < m; ++i) {
		cin >> ind[i];
	}
	sort(ind.begin(), ind.end());
	
	string c;
	cin >> c;

	map<char, int> charCount;
	for (char ce = 'a'; ce <= 'z'; ++ce) {
		charCount[ce] = 0;
	}

	char chars[] = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < m; ++i) {
		charCount[c[i]]++;
	}

	int currentCharIndex = 0;
	int worstCharIndex = 25;
	for (int i = 0; i < m - 1; ++i) {
		
		if (ind[i + 1] == ind[i]) {// we want worst letter
			while (charCount[chars[worstCharIndex]] < 1) {
				--worstCharIndex;
			}
			s[ind[i] - 1] = chars[worstCharIndex];
			--charCount[chars[worstCharIndex]];
			continue;
		} 
		// we want best letter
		while (charCount[chars[currentCharIndex]] < 1) {
			++currentCharIndex;
		}
		
		s[ind[i] -1] = chars[currentCharIndex];
		--charCount[chars[currentCharIndex]];
	}
	
	while (charCount[chars[currentCharIndex]] < 1) {
		++currentCharIndex;
	}
	
	s[ind[m-1] - 1] = chars[currentCharIndex];

	cout << s << "\n";
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
