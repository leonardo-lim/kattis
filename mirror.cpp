#include <iostream>

using namespace std;

int main() {
	int t, r, c, count = 1;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> r >> c;
		
		string x[r];
		string y[r];
		
		for (int j = 0; j < r; j++) {
			cin >> x[j];
		}
		
		for (int k = 0; k < r; k++) {
			for (int l = 0; l < c; l++) {
				if (x[k][l] == '*') {
					x[k][l] = '.';
					y[r - 1 - k][c - 1 - l] = '#';
				}
			}
		}
		
		for (int k = 0; k < r; k++) {
			for (int l = 0; l < c; l++) {
				if (y[k][l] == '#') {
					x[k][l] = '*';
				}
			}
		}
		
		cout << "Test " << count << endl;
		count++;
		
		for (int k = 0; k < r; k++) {
			for (int l = 0; l < c; l++) {
				cout << x[k][l];
			}
			cout << endl;
		}
	}
	
	return 0;
}
