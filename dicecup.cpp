#include <iostream>

using namespace std;

int main() {
	int n, m, diff;
	
	cin >> n >> m;
	
	if (n > m) {
		diff = n - m;
		m++;
	} else {
		diff = m - n;
		m = n + 1;
	}
	
	diff++;
	
	for (int i = 0; i < diff; i++) {
		cout << m << endl;
		m++;
	}
	
	return 0;
}
