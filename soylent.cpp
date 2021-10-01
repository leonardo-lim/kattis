#include <iostream>

using namespace std;

int main() {
	int t, n;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		if (n == 0) {
			cout << 0 << endl;
		} else if (n % 400 == 0) {
			cout << n / 400 << endl;
		} else {
			cout << (n / 400) + 1 << endl;
		}
	}

	return 0;
}

