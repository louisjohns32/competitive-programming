#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, k, bStart, sStart;

ll maxScore(ll startPos, vector<ll> a, vector<ll> p) {
	
	ll stayPos = startPos;
	ll movePos = startPos;
	ll currentMax = k * a[stayPos - 1];
	ll moveSum = 0;
	ll turn = 0;
	vector<bool> visited(n);
	while (turn < k && !visited[movePos]) {
		visited[movePos] = true;
		moveSum += a[movePos - 1];
		movePos = p[movePos - 1];
		//cout << staySum << " : " << moveSum << " : " << turn << "\n";
		++turn;
		currentMax = max(currentMax, moveSum + a[movePos - 1] * (k - turn));
		
	}
	return currentMax;

}


void solveCase() {
	cin >> n >> k >> bStart >> sStart;
	vector<ll> p(n);
	vector<ll> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	ll sScore = maxScore(sStart, a, p);
	ll bScore = maxScore(bStart, a, p);

	if (sScore > bScore) {
		cout << "Sasha\n";
	}
	else if (bScore > sScore) {
		cout << "Bodya\n";
	}
	else {
		cout << "Draw\n";
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
