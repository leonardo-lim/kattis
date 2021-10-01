#include <iostream>

using namespace std;

int main() {
	int n, d;
	
	cin >> n >> d;
	
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		if (a[i] <= d) {
			cout << "It hadn't snowed this early in " << i << " years!";
			break;
		}
		
		if (i == n - 1) {
			cout << "It had never snowed this early!";
		}
	}

	return 0;
}
