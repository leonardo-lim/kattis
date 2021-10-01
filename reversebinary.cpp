#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, a[30], i = 0, j = 0, sum = 0;
	
	cin >> n;
	
	while (n != 0) {
		a[i] = n % 2;
		n /= 2;
		i++;
	}
	
	int k = i - 1;
		
	for (i = k; i >= 0; i--) {
		if (a[i] == 1) {
			sum += pow(2, j);
			j++;
		} else {
			j++;
		}
	}
	
	cout << sum;
	
	return 0;
}
