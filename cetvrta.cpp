#include <iostream>

using namespace std;

int main() {
	int x[5], y[5], count = 0;
	
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
		
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				if (x[i] != x[j]) {
					count++;				
				}
			}
			
			if (count == 2) {
				cout << x[i] << " ";
				break;
			}
		}
		if (count == 2) {
			count = 0;
			break;
		} else {
			count = 0;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j) {
				if (y[i] != y[j]) {
					count++;				
				}
			}
			
			if (count == 2) {
				cout << y[i];
				break;
			}
		}
		if (count == 2) {
			count = 0;
			break;
		} else {
			count = 0;
		}
	}
}
