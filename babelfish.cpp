#include <bits/stdc++.h>

using namespace std;

int main() {
	int j = 0, length;
	string x, word, dict;
	
	map<string, string> m;
	
	while (getline(cin, x)) {
		length = x.size();
		
		if (x == "") break;
		
		for (int i = 0; x[i] != ' '; i++, j++) {
			word += x[i];
		}
		
		for (int i = j + 1; i < length; i++) {
			dict += x[i];
		}
		
		m[dict] = word;
		word = "";
		dict = "";
		j = 0;
	}
	
	while (cin >> x) {
		if (m[x] != "") {
			cout << m[x] << endl;
		} else {
			cout << "eh" << endl;
		}
	}

	return 0;
}
