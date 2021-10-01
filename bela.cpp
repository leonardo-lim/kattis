#include <iostream>

using namespace std;

int main() {
	int n, total = 0;
	char b;
	
	cin >> n >> b;
	
	char x[n * 4][3];
	
	for (int i = 0; i < n * 4; i++) {
		cin >> x[i];
		
		if (x[i][0] == 'A') {
			total += 11;
		} else if (x[i][0] == 'K') {
			total += 4;
		} else if (x[i][0] == 'Q') {
			total += 3;
		} else if (x[i][0] == 'T') {
			total += 10;
		} else if (x[i][0] == 'J') {
			if (x[i][1] == b) {
				total += 20;
			} else {
				total += 2;
			}
		} else if (x[i][0] == '9') {
			if (x[i][1] == b) {
				total += 14;
			}
		} 
	}
	
	cout << total;
	
	return 0;
}
