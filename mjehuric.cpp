#include <bits/stdc++.h>

using namespace std;

int main() {
	int x[5], temp;
		
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	
	while (true) {
		if (x[0] == 1 && x[1] == 2 && x[2] == 3 && x[3] == 4 && x[4] == 5) break;
		
		for (int i = 0; i < 4; i++) {
			if (x[i] > x[i + 1]) {
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
				
				for (int i = 0; i < 5; i++) {
					cout << x[i] << " ";
					
					if (i == 4) {
						cout << endl;
					}
				}
			}
		}
	}

	return 0;
}
