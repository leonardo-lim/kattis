#include <iostream>

using namespace std;

int main() {
	int n, k, expenses = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		
		if (k < 0) {
			expenses -= k;
		}
	}
	
	cout << expenses << endl;

	return 0;
}
