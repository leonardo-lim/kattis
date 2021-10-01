#include <iostream>

using namespace std;

int sumNumber(int n) {
	int num, sum = 0;
	
	while (n != 0) {
		num = n % 10;
		sum += num;
		n /= 10;
	}
	
	return sum;
}

int main() {
	int n, m, sum = 0;
	
	cin >> n;
	
	m = n;

	sum = sumNumber(n);	
		
	if (m % sum == 0) {
		cout << m;
	} else {
		while (m % sum != 0) {
			m++;
			sum = sumNumber(m);
		}
		cout << m;
	}
	
	return 0;
}
