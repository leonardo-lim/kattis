#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, a, total = 0;
	
	cin >> n >> t;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		
		if (i == 0 && a > t) {
			cout << i;
			break;
		}
		
		if (total + a > t) {
			cout << i;
			break;
		} else {
			total += a;
		}
		
		if (i == n - 1) {
			cout << i + 1;
		}
	}

	return 0;
}
