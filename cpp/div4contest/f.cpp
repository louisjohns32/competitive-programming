#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	long long h, n;
	cin >> h >> n;

	vector<long long> a(n);
	vector<long long> c(n);

	for (long long i = 0; i < n; ++i) {
		cin >>a[i];
	}
	for (long long i = 0; i < n; ++i) {
		cin >> c[i];
	}

	priority_queue<pair<long long, long long>, vector< pair<long long, long long> >, greater<pair<long long, long long> > > pq; // turn available, damage

	long long turn = 1;

	for (long long i = 0; i < n; ++i) {
		h -= a[i];
		pq.push(make_pair(1 + c[i], i));
	}
	
	while (h > 0) {
		long long i = pq.top().second;
		h -= a[i];
		turn = pq.top().first;
		pq.push(make_pair(turn + c[i], i));
		pq.pop();
	}

	cout <<  turn << '\n';
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
