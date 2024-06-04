#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	char diagonal_char, filler_char;
	string line;
	string res = "YES";

	// first line 
	cin >> line;
	diagonal_char = line[0];
	filler_char = line[1];
	if (filler_char == diagonal_char) {
		res="NO";
	}
	for (int i = 2; i < n - 1; i++) {
		if (line[i] != filler_char) {
			res = "NO";
		}
	}
	
	if (line[n - 1] != diagonal_char) {
		res = "NO";
	}

	// rest of lines
	for (int i = 1; i < n; i++) {
		cin >> line;
		for (int j = 0; j < n; j++) {
			if (i == j || i == n - 1 - j) {
				if (line[j] != diagonal_char) {
					res = "NO";
				}
			}
			else if (line[j] != filler_char) {
				res = "NO";
			}
		}
	}
	
	cout << res;
	return 0;
}