#include <iostream>

using namespace std;

int sumDigits(int n) {
	int sum = 0, num;
	
	while (n > 0) {
		num = n % 10;
		sum += num;
		n /= 10;
	}
	
	return sum;
}

int main() {
	int l, d, x, n, m, sumN, sumM;
	
	cin >> l >> d >> x;
	
	n = l;
	m = d;
	
	while (sumN != x) {
		sumN = sumDigits(n);
		n++;
	}
	
	while (sumM != x) {
		sumM = sumDigits(m);
		m--;
	}
	
	cout << n - 1 << endl << m + 1;
}
