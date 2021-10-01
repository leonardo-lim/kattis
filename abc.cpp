#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[3], b;
	string d;
	
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	
	cin >> d;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	
	for (int i = 0; i < 3; i++) {
		if (d[i] == 'A') {
			cout << a[0];
		} else if (d[i] == 'B') {
			cout << a[1];
		} else {
			cout << a[2];
		}
		
		if (i != 2) {
			cout << " ";
		}
	}

	return 0;
}
