#include <iostream>

using namespace std;

int main() {
	int k, a = 0, b = 1, c, d;
	
	cin >> k;
	
	for (int i = 1; i <= k; i++) {
		if (i != 1) {
			c = a;
			d = b;
			
			a = d;
			b = c + d;
		}
	}
	
	cout << a << " " << b;
	
	return 0;
}
