#include <iostream>

using namespace std;

int main() {
	int x[11], mod[11], count = 0, total = 1;
	
	for (int i = 0; i < 10; i++) {
		cin >> x[i];
		
		mod[i] = x[i] % 42;
	}
	
	for (int j = 1; j < 10; j++) {
		for (int k = 0; k < j; k++) {
			if (mod[j] != mod[k]) {
				count++;
			}
			
			if (count == j) {
				total++;
			}
		}
		count = 0;
	}
	
	cout << total;
	
	return 0;
}
