#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check(ll n, ll satisfied) {
	return (satisfied >= (double)n / 2);
}

int stoi(char a) {
	return a - '0';
}

void solveCase() {
	ll n;
	cin >> n;

	string a;
	cin >> a;

	ll lPtr, rPtr;
	if (n % 2 == 0) {
		lPtr = rPtr = (n + 1) / 2 - 1;
	}
	else {
		lPtr = (n + 1) / 2 - 2;
		rPtr = (n + 1) / 2 - 1;
	}
	

	ll lnumLeft, lnumRight, rnumLeft, rnumRight;

	lnumLeft = lnumRight = rnumLeft = rnumRight = 0;
	
	for (int i = 0; i <= lPtr; ++i) {
		lnumLeft += !(stoi(a[i]) || 0);
	}
	for (int i = lPtr + 1; i < n; ++i) {
		lnumRight += stoi(a[i]) && 1;
	}

	if (lPtr == rPtr) {
		rnumLeft = lnumLeft;
		rnumRight = lnumRight;
	}
	else {
		rnumLeft = lnumLeft + !stoi(a[rPtr]);
		rnumRight = lnumRight - stoi(a[rPtr]);
	}

	while (lPtr >= -1) {
		//cout << "lptr: " << lPtr << " numleft: " << lnumLeft << " numright: " << lnumRight << "\n";
		//cout << "rptr: " << rPtr << " numleft: " << rnumLeft << " numright: " << rnumRight << "\n";
		//cout << abs((double)n / 2 - lPtr - 1) << " : " << abs((double)n / 2 - rPtr - 1) << "\n";
		//if (abs((double)n / 2 - lPtr - 1) != abs((double)n / 2 - rPtr - 1)) {
		//	cout << "ISSUE" << "\n";
	//	}
		if (check(lPtr + 1, lnumLeft) && check(n - lPtr - 1, lnumRight) ){
			cout << lPtr + 1 << "\n";
			return;
		}
		if (check(rPtr + 1, rnumLeft) && check(n - rPtr - 1, rnumRight)) {
			cout << rPtr + 1 << "\n";
			return;
		}

		lnumLeft -= !stoi(a[lPtr]);
		lnumRight += stoi(a[lPtr]);

		++rPtr;
		rnumLeft += !stoi(a[rPtr]);
		rnumRight -= stoi(a[rPtr]);


		--lPtr;
		
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
