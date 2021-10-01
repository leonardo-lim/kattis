#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	double r, c;
	
	cin >> r >> c;
	
	printf("%.10lf", ((r - c) * (r - c) * 100) / (r * r));

	return 0;
}

