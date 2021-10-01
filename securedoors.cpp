#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string name1, name2;
	
	map<string, bool> m;
	
	cin >> n;
	
	string x;
	
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, x);
		
		name1 = x.substr(6, x.size() - 1);
		name2 = x.substr(5, x.size() - 1);
		
		if (x[1] == 'n') {
			if (m[name1] == 0) {
				cout << name1 << " entered" << endl;
				m[name1] = true;
			} else {
				if (m[name1] == true) {
					cout << name1 << " entered (ANOMALY)" << endl;
				} else {
					cout << name1 << " entered" << endl;
					m[name1] = true;
				}
			}
		} else if (x[1] == 'x') {
			if (m[name2] == 0) {
				m[name2] = false;
				cout << name2 << " exited (ANOMALY)" << endl;
			} else {
				if (m[name2] == false) {
					cout << name2 << " exited (ANOMALY)" << endl;
				} else {
					cout << name2 << " exited" << endl;
					m[name2] = false;
				}
			}
		}
	}

	return 0;
}
