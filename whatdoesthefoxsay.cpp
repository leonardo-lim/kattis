#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, len, j = 0;
	string x, y, sound, word;
	
	map<string, int> m;
	
	cin >> t;
	cin.ignore();
	
	while (t--) {
		getline(cin, x);
		
		while (true) {
			getline(cin, y);
			
			if (y == "what does the fox say?") break;
			
			len = y.size();
			
			for (int i = 0; i < len; i++) {
				if (y[i] == 'g' && y[i + 1] == 'o' && y[i + 2] == 'e' && y[i + 3] == 's') {
					i += 5;
					
					while (i < len) {
						sound += y[i];
						i++;
					}
					
					m[sound]++;
					sound = "";
					break;
				}
			}
		}
		
		len = x.size();
		
		for (int i = 0; i < len; i++) {
			if (x[i] == ' ') {
				if (m[word] == 0) {
					cout << word << " ";
				}
				
				word = "";
			} else {
				word += x[i];
			}
		}
		
		if (m[word] == 0) {
			cout << word << " ";
		}

		cout << endl;
		
		m.clear();
		word = "";
		j = 0;
	}

	return 0;
}
