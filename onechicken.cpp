#include <iostream>

using namespace std;

int main() {
	int n, m, diff;
	
	cin >> n >> m;
	
	if (n < m) {
		diff = m - n;
		
		if (diff == 1) {
			cout << "Dr. Chaz will have " << diff << " piece of chicken left over!";
		} else {
			cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!";
		}
	} else {
		diff = n - m;
		
		if (diff == 1) {
			cout << "Dr. Chaz needs " << diff << " more piece of chicken!";
		} else {
			cout << "Dr. Chaz needs " << diff << " more pieces of chicken!";
		}
	}

	return 0;
}

