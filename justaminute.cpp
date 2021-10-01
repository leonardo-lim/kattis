#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, m, s;
	double mTotal = 0, sTotal = 0, sl;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> m >> s;
		
		mTotal += m;
		sTotal += s;
	}
	
	sl = (sTotal / 60) / mTotal;
	
	if (sl > 1) {
		printf("%.10lf", sl);
	} else {
		cout << "measurement error";
	}

	return 0;
}

