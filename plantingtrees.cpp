#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, day = 2, max, total;
	
	cin >> n;
	
	int t[n];
	
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	
	sort(t, t + n, greater<int>());
	max = t[0] + day;
	
	for (int i = 1; i < n; i++) {
		day++;
		total = t[i] + day;
		
		if (total > max) {
			max = total;
		} 
	}
	
	cout << max << endl;

	return 0;
}
