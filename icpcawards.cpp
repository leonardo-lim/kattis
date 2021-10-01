#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, count = 0, total = 1;
	
	cin >> n;
	
	string u[n], t[n];
	
	for (int i = 0; i < n; i++) {
		cin >> u[i] >> t[i];
	}
	
	cout << u[0] << " " << t[0] << endl;
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (u[i] != u[j]) {
				count++;
			}
			
			if (count == i) {
				cout << u[i] << " " << t[i] << endl;
				total++;
			}
		}
		count = 0;
		
		if (total == 12) {
			break;
		}
	}
	
	return 0;
}
