#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	vector<int> cities(n);

	for (int i = 0; i < n; i++) {
		cin >> (cities[i]);
	}

	int left_pointer = a - 2;
	int right_pointer = a;
	int total = 0;
	total += cities[a-1];
	

	while (left_pointer >= 0 && right_pointer < n) {
		if (cities[left_pointer] + cities[right_pointer] == 2) {
			total += 2;
		}
		left_pointer--;
		right_pointer++;
	}
	int pointer;
	int increment;

	if (left_pointer < 0) {
		pointer = right_pointer;
		increment = 1;
	}
	else {
		pointer = left_pointer;
		increment = -1;
	}

	while (pointer >= 0 && pointer < n) {
		total += cities[pointer];
		pointer += increment;
	}

	cout << total;
	return 0;
}