#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, white = 0, black = 0;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == 'W') white++;
		else black++;
	}
	
	if (white == black) cout << "1";
	else cout << "0";

	return 0;
}
