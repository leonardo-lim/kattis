#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, w, h, x;
	
	cin >> n >> w >> h;
	
	int max = sqrt((w * w) + (h * h));
		
	for (int i = 0; i < n; i++) {
		cin >> x;
		
		if (x <= max) {
			cout << "DA" << endl;
		} else {
			cout << "NE" << endl;
		}
	}

	return 0;
}
