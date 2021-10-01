#include <iostream>

using namespace std;

int main() {
	int n, g, id;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> g;
		
		int x[g];
		
		for (int j = 0; j < g; j++) {
			cin >> x[j];
			
			if (j == 0) {
				id = x[j];
			}
		}
		
		for (int k = 0; k < g; k++) {
			if (x[k] != id) {
				cout << k + 1 << endl;
				break;
			}
			
			id++;
		}
	}

	return 0;
}
