#include <iostream>

using namespace std;

int main() {
	int n, g;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> g;
		int c[g];
		
		for (int j = 0; j < g; j++) {
			cin >> c[j];
		}
		
		for (int k = 0; k < j; k++) {
			for (int l = 1; l < j; l++) {
				if (c[k] == c[l]) {
					
				}
			}
		}
	}
}
