#include <iostream>

using namespace std;

int main() {
	int t, k, n;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		
		if (n % 2 == 1) {
			cout << k << " " << n * ((n + 3) / 2) << endl;
		} else {
			cout << k << " " << n * ((n + 3) / 2) + (n / 2) << endl;
		}
	}

	return 0;
}
