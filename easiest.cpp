#include <bits/stdc++.h>

using namespace std;

int sumDigits(int n) {
	int num, total = 0;
	
	while (n > 0) {
		num = n % 10;
		total += num;
		n /= 10;
	}
	
	return total;
}

int main() {
	int n, sum1, sum2, i = 11;
	
	while (cin >> n) {
		if (n == 0) break;
		
		sum1 = sumDigits(n);
		sum2 = sumDigits(n * i);
		
		while (sum1 != sum2) {
			i++;
			sum2 = sumDigits(n * i);
		}
		
		cout << i << endl;
		i = 11;
	}

	return 0;
}
