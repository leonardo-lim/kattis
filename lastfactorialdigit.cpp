#include <iostream>

using namespace std;

int main() {
	int t, n, total = 1;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		while (n > 1) {
			total *= n;
			n--;
		}
		
		cout << total % 10 << endl;
		total = 1;
	}
	
	return 0;
}
