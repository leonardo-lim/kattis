#include <iostream>

using namespace std;

int main() {
	int n, x, min, max, range, j = 0;
	
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> x;
			
			if (i == 0) {
				min = x;
				max = x;
			}
			
			if (x < min) {
				min = x;
			}
			
			if (x > max) {
				max = x;
			}
		}
		
		range = max - min;
		j++;
		
		cout << "Case " << j << ": " << min << " " << max << " " << range << endl;
	}
	
	return 0;
}
