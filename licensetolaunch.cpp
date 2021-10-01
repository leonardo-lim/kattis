#include <iostream>

using namespace std;

int main() {
	int n, smallest, day;
	
	cin >> n;
	
	int x[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		
		if (i == 0) {
			smallest = x[i];
			day = i;
		}
		
		if (x[i] < smallest) {
			smallest = x[i];
			day = i;
		}
	}
	
	cout << day;
	
	return 0;
}
