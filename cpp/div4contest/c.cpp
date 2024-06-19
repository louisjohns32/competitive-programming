#include <bits/stdc++.h>

using namespace std;

int currentMaxIndex;



void solveCase() {
	long long  n;
	cin >> n;
	vector<int> a(n);
	for (long long  i = 0; i < n; i++) {
		cin >> a[i];
	}

	// if n is good, n +1 can only be good if n+1 is new maximum.
	// then we must go until the new sum of next elements + old maximum = difference
	long long res = 0;
	long long max = a[0];
	long long sum = 0;
	if (max == 0) {
		res++;
		
	}
	
	for (long long i = 1; i < n; ++i) {
		if (a[i] > max) {
			sum += max;
			max = a[i];
		}
		else {
			sum += a[i];
		}
		if (sum == max) {
			res += 1;
		}
	}

	cout << res << '\n';

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
