#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string c, d;

	while (true) {
		cin >> n;
		
		if (n == 0) {
			break;
		}
		
		string x[n], y[n];
		
		for (int i = 0; i < n; i++) {
			cin >> x[i];
			
			y[i] += x[i][0];
			y[i] += x[i][1];
		}
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (y[j] > y[j + 1]) {
					c = y[j];
					y[j] = y[j + 1];
					y[j + 1] = c;
					
					d = x[j];
					x[j] = x[j + 1];
					x[j + 1] = d;
				}
			}
		}
		
		for (int i = 0; i < n; i++) {
			cout << x[i] << endl;
		}
		
		cout << endl;
	}		
	
	return 0;
}
