#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, a, high;
	
	cin >> n;
	
	int x[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	
	a = x[0];
	
	for (int i = 1; i < n; i++) {
		high = max(x[0], x[i]);

		for (int j = 2; j <= high; j++) {
			if (x[0] % j == 0 && x[i] % j == 0) {
				x[0] /= j;
				x[i] /= j;
				j = 1;
			}
		}
		
		cout << x[0] << "/" << x[i] << endl;
		x[0] = a;
	}

	return 0;
}
