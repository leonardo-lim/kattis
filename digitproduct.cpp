#include <iostream>

using namespace std;

int digitProduct(int x) {
	int num, total = 1; 
	
	while (x > 0) {
		num = x % 10;
		if (num != 0) total *= num;
		x /= 10;
	}
	
	return total;
}

int main() {
	int x, total;
	
	cin >> x;
	
	total = digitProduct(x);
	
	while (total > 9) {
		x = total;
		total = digitProduct(x);
	}
	
	cout << total;

	return 0;
}
