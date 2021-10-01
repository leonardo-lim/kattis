#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, length;
	double total = 0.0;
	string x;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, x);
		
		length = x.size();
		
		for (int j = 0; j < length - 1; j++) {
			if (x[j] == 32) {
				x[j] += 59;
			} else if (x[j + 1] == 32) {
				x[j + 1] += 59;
			} else if (x[j] == 39) {
				x[j] += 53;
			} else if (x[j + 1] == 39) {
				x[j + 1] += 53;
			}
			
			cout << x[j] << " c " << endl;
			
			if (x[j] > x[j + 1]) {
				if (x[j] - x[j + 1] < 15) {
					total += ((((double) x[j] - x[j + 1])) + 1);
				} else {
					total += ((((double) 28 - x[j] - x[j + 1])) + 1);
				}
				cout << ((((double) x[j] - x[j + 1])) + 1) << endl;
			} else {
				if (x[j] - x[j + 1] < 15) {
					total += ((((double) x[j + 1] - x[j])) + 1);
				} else {
					total += ((((double) 28 - x[j + 1] - x[j])) + 1);
				}
				cout << ((((double) x[j + 1] - x[j])) + 1) << endl;
			}
		}
	}
	
	cout << total;
	
	return 0;
}
