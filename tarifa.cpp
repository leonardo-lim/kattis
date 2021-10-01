#include <iostream>

using namespace std;

int main() {
	int m, n, x, total = 0;
	
	cin >> m;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		total += (m - x);		
	}
	
	total += m;
	
	cout << total;
	
	return 0;
}
