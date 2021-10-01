#include <iostream>

using namespace std;

int main() {
	int n, x, j = 0, num = 1, c[205];
	
	c[0] = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		
		while (num < x) {
			c[j] = num;
			num++;
			j++;
		}
		
		num++;
	}
	
	if (c[0] == 0) {
		cout << "good job";
	} else {
		for (int i = 0; i < j; i++) {
			cout << c[i];
			
			if (i != j - 1) {
				cout << endl;
			}
		}
	}
	
	return 0;
}
