#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solveCase() {
	ll n, m, k;
	cin >> n >> m >> k;

	vector<ll> a(n);
	vector<ll> b(m);
	map<ll, ll> nums;

	ll ans = 0;

	ll numsCount = 0;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		if (nums.count(b[i])) {
			++nums[b[i]];
			continue;
		}
		nums[b[i]] = 1;
	}

	ll l, r;
	l = r = 0;
	
	

	while (r < m ) {
		if (nums.count(a[r])) {
			--nums[a[r]];
			if (nums[a[r]] >= 0) {
				++numsCount;
			}
		}
		++r;
	}
	--r;

	while (r < n) {
		
		if (numsCount >= k) {
			++ans;
		}

		++r;
		if (nums.count(a[r]) ) {
			--nums[a[r]];
			if (nums[a[r]] >= 0) {
				++numsCount;
			}
		}


		if (nums.count(a[l]) != 0) {
			++nums[a[l]];
			if (nums[a[l]] > 0) {
				--numsCount;
			}
		}
		++l;
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
