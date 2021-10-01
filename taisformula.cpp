#include <iostream>

using namespace std;

int main() {
	int n;
	double total;
	
	cin >> n;
	
	double t[n], v[n];
	
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> v[i];
	}
	
	for (int i = 1; i < n; i++) {
		total += (((v[i] + v[i - 1]) / 2) * (t[i] - t[i - 1]));
	}
	
	cout << fixed << total / 1000;

	return 0;
}
