#include <iostream>

using namespace std;

int main() {
	int r, n, count = 0;
	
	cin >> r >> n;
	
	int x[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	
	if (r == n) {
		cout << "too late";
	} else {
		for (int j = 1; j <= r; j++) {
			for (int k = 0; k < n; k++) {
				if (j == x[k]) {
					count++;
					break;
				}
			}
			if (count == 0) {
				cout << j;
				break;
			} else {
				count = 0;
			}
		}	
	}
	
	return 0;
}
