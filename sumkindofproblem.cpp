#include <iostream>

using namespace std;

int main() {
	int p, k, n, s1 = 0, s2 = 0, s3 = 0, odd = 1, even = 2;
	
	cin >> p;
	
	for (int i = 0; i < p; i++) {
		cin >> k >> n;
		
		for (int j = 1; j <= n; j++) {
			s1 += j;
			s2 += odd;
			s3 += even;
			
			odd += 2;
			even += 2;
		}
		
		cout << k << " " << s1 << " " << s2 << " " << s3 << endl;
		
		odd = 1;
		even = 2;
		s1 = 0;
		s2 = 0;
		s3 = 0;
	}

	return 0;
}

