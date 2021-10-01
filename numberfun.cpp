#include <iostream>

using namespace std;

int main() {
	int n, a, b, c;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		
		if (a + b == c || a - b == c || b - a == c || a * b == c) {
			cout << "Possible" << endl;
		} else if ((a / b == c && a % b == 0) || (b / a == c && b % a == 0)) {
			cout << "Possible" << endl;
		} else {
			cout << "Impossible" << endl;
		}
	}

	return 0;
}
