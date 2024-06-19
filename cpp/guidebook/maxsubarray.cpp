#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	int x;
	for (int i = 0; i < n;++i) {
		cin >> x;
		v.push_back(x);
	}

	int highest, prevMax;
	prevMax = v[0];
	highest = v[0];

	for (auto& i : v) {
		if (prevMax < 0) {
			prevMax = i;
		}
		else {
			prevMax += i;
		}
		highest = max(prevMax, highest);
	}

	cout << highest;
}