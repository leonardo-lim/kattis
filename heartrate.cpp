#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, b;
	double p, x;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> b >> p;
		
		x = 60 / p;
				
		printf("%.4lf %.4lf %.4lf\n", (b - 1) * x, b * x, (b + 1) * x);
	}
	
	return 0;
}
