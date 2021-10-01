#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, a[26] = {0}, length, count = 0;
	string x, y = "";
	
	cin >> n;
	
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, x);
		
		length = x.size();
		
		for (int j = 0; j < length; j++) {
			if (x[j] >= 65 && x[j] <= 90) {
				a[x[j] % 65]++;
			} else if (x[j] >= 97 && x[j] <= 122) {
				a[x[j] % 97]++;
			}
		}
		
		for (int k = 0; k < 26; k++) {
			if (a[k] > 0) {
				count++;
			} else {
				y += (char) 97 + k;
			}
		}
		
		if (count == 26) {
			cout << "pangram" << endl;
		} else {
			cout << "missing " << y << endl;
		}
		
		for (int l = 0; l < 26; l++) {
			a[l] = 0;
		}
		
		count = 0;
		y = "";
	}

	return 0;
}
