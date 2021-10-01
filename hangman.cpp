#include <bits/stdc++.h>

using namespace std;

bool checkWord(string x, int len) {
	for (int i = 0; i < len; i++) {
		if (x[i]) return true;
	}
	
	return false;
}

int main() {
	int len, guess = 0;
	bool check = false;
	string x, y;
	
	cin >> x >> y;
	
	len = x.size();
	
	for (int i = 0; i < 26; i++) {
		if (guess >= 10) {
			break;
		} else if (checkWord(x, len)) {
			for (int j = 0; j < len; j++) {
				if (y[i] == x[j]) {
					x[j] = '\0';
					check = true;
				}
			}
			
			if (!check) guess++;
			check = false;
		} else {
			break;
		}
	}
	
	if (guess < 10) {
		cout << "WIN";
	} else {
		cout << "LOSE";
	}

	return 0;
}
