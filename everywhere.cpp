#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n, count = 0, total = 1;
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		string city[n];
		
		for (int j = 0; j < n; j++) {
			cin >> city[j];
		}
		
		for (int k = 1; k < n; k++) {
			for (int l = 0; l < k; l++) {
				if (city[k] != city[l]) {
					count++;
				}
				
				if (count == k) {
					total++;
				}
			}
			count = 0;
		}
		
		cout << total << endl;
		total = 1;
	}
	
	return 0;
}
