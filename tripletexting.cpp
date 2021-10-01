#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, num, j = 0;
	string x, y[3];
	
	cin >> x;
	
	len = x.size();
	num = len / 3;
	
	for (int i = 0; i < len; i++) {
		y[j] += x[i];
		if ((i + 1) % num == 0) j++;
	}
		
	if (y[0] == y[1] && y[1] == y[2]) {
		cout << y[0];
	} else if (y[0] == y[1] || y[0] == y[2]) {
		cout << y[0];
	} else {
		cout << y[1];
	}

	return 0;
}
