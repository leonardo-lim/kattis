#include <bits/stdc++.h>

using namespace std;

int main() {
	int w, n;
	long long a, b, total = 0;
	
	cin >> w >> n;
	
	while (n--) {
		cin >> a >> b;
		
		total += a * b;
	}
	
	cout << total / w;

	return 0;
}
