#include <iostream>
#include <string>

using namespace std;

int main() {
	int l = 0, r = 0;
	string x;
	
	cin >> x;
	
	int length = x.size();
	int hl = length / 2;
	
	for (int i = 0; i < hl; i++) {
		x[i] -= 65;
		l += x[i];
	}
	
	for (int i = hl; i < length; i++) {
		x[i] -= 65;
		r += x[i];
	}
		
	while (l > 26) {
		l -= 26;
	}
	
	while (r > 26) {
		r -= 26;
	}
	
	for (int j = 0; j < hl; j++) {
		x[j] += (65 + l);
		
		if (x[j] > 90) {
			x[j] -= 26;
		}
	}
	
	for (int j = hl; j < length; j++) {
		x[j] += (65 + r);
		
		if (x[j] > 90) {
			x[j] -= 26;
		}
	}
	
	for (int k = 0; k < hl; k++) {
		x[k] += (x[k + hl] - 65);
		
		if (x[k] > 90) {
			x[k] -= 26;
		}
	}
	
	cout << x.substr(0, hl);
	
	return 0;
}
