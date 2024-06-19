#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	long long  n, k, q, d;
	cin >> n >> k >> q;
	vector<int> signs(k + 1);
	vector<int> minutes(k + 1);
	signs[0] = minutes[0] = 0;
	long long int num;
	
	for (int i = 1; i < k+1; ++i) {
		cin >> num;
		signs[i] = num;
	}

	for (int i = 1; i < k+1; ++i) {
		
		cin >> num;
		minutes[i] = num;
	}
	

	for (int i = 0; i < q; ++i) {
		cin >> d;
		auto closestBelow = upper_bound(signs.begin(), signs.end(), d) - signs.begin() - 1;
		if (signs[closestBelow] == d) {
			cout << minutes[closestBelow] << ' ';
			continue;
		}
		long long ans = (minutes[closestBelow] + ((d - signs[closestBelow]) * (minutes[closestBelow + 1] - minutes[closestBelow])) / ((signs[closestBelow + 1] - signs[closestBelow])));
		cout << ans << ' ';

	}
	cout << endl;
	
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
