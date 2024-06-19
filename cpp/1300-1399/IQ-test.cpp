#include <bits/stdc++.h>

using namespace std;

void solveCase() {
	int n;
	cin >> n;
	vector<int> nums(n);
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		nums[i] = num;
	}

	for (int i = 1; i < n; ++i) {
		if (nums[i] % 2 != nums[i-1] % 2) {
			if (i > 1) {
				cout << i + 1;
				return;
			}
			else {
				cout << (nums[0] % 2 == nums[2] % 2) + 1;
				return;
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(0);
	solveCase();

	return 0;
}
