#include <iostream>

using namespace std;

int main() {
	int s, t, n, total = 0;
	
	cin >> s >> t >> n;
	
	int d[n + 1], b[n], c[n];
	
	for (int i = 0; i <= n; i++) {
		cin >> d[i];
	}
	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	
	total += s;
	
	for (int j = 0; j < n; j++) {
		total += d[j];
		
		if (c[j] > total) {
			total += (c[j] - total);
		} else {
			if (total % c[j] != 0) {
				total += (c[j] - (total % c[j]));
			}
		}
		
		total += b[j]; 
	}
	
	total += d[n];
	
	if (total <= t) {
		cout << "yes";
	} else {
		cout << "no";
	}
	
	return 0;
}
