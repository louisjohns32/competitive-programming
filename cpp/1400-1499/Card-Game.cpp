#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	int n;
	cin >> n;
	char trumpSuit;
	cin >> trumpSuit;

	map<char, vector<int>> suitsMap;
	suitsMap['c'] = {};
	suitsMap['d'] = {};
	suitsMap['s'] = {};
	suitsMap['h'] = {};

	string card;
	for (int i = 0; i < 2 * n; ++i) {
		cin >> card;
		suitsMap[card[1]].push_back(card[0] - '0');
	}

	vector<string> ans;
	// for each non trump suit, take % 2 cards and pair with a trump card
	for (auto& [key, val] : suitsMap) {
		if (key != trumpSuit) {
			if (val.size() % 2 == 1) {
				if (suitsMap[trumpSuit].empty()) {
					cout << "IMPOSSIBLE" << "\n";
					return;
				}
				ans.push_back(to_string(val[val.size() - 1]) + key + " " + to_string(suitsMap[trumpSuit][suitsMap[trumpSuit].size() - 1]) + trumpSuit);
				val.pop_back();
				suitsMap[trumpSuit].pop_back();
			}
		}

		

	}

	for (auto const& [key, val] : suitsMap) {
		for (int i = 0; i < val.size(); i += 2) {
			if (val[i] < val[i + 1]) {
				ans.push_back(to_string(val[i]) + key + " " + to_string(val[i + 1]) + key);
			}
			else {
				ans.push_back(to_string(val[i + 1]) + key + " " + to_string(val[i]) + key);
			}
		}
	}

	for (auto i : ans) {
		cout << i << "\n";
	}



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
