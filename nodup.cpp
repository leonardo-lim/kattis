#include <bits/stdc++.h>

using namespace std;

int main() {
	string x, word;
	
	map<string, bool> m;
	
	getline(cin, x);
	
	int length = x.size();
	
	for (int i = 0; i < length; i++) {
		if (x[i] == ' ' || i == length - 1) {
			if (i == length - 1) {
				word += x[i];
			}

			if (!m[word]) {
				m[word] = true;
				word = "";
			} else {
				cout << "no";
				break;
			}
		} else {
			word += x[i];
		}
		
		if (i == length - 1) {
			cout << "yes";
		}
	}
		
	return 0;
}
