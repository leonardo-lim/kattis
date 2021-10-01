#include <iostream>

using namespace std;

int main() {
	int n, x[100], j = 0, limit = 0, total = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x[j];
		limit = x[j] * 2;
		
		while (x[j] != 0) {
			j++;
			cin >> x[j];
			
			if (x[j] > limit) {
				total += (x[j] - limit);
			}
			
			limit = x[j] * 2;
		}
		
		cout << total << endl;
		total = 0;
		j = 0;
	}
	
	return 0;
}
