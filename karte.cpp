#include <iostream>

using namespace std;

int main() {
	int p[13] = {0}, k[13] = {0}, h[13] = {0}, t[13] = {0};
	int length, pTotal = 13, kTotal = 13, hTotal = 13, tTotal = 13;
	string x;
	
	cin >> x;
	
	length = x.size();
	
	for (int i = 0; i < length; i++) {
		if (x[i] == 'P') {
			if (x[i + 1] == '0') {
				p[x[i + 2] - 49]++;
			} else {
				p[x[i + 2] - 39]++;
			}
		} else if (x[i] == 'K') {
			if (x[i + 1] == '0') {
				k[x[i + 2] - 49]++;
			} else {
				k[x[i + 2] - 39]++;
			}	
		} else if (x[i] == 'H') {
			if (x[i + 1] == '0') {
				h[x[i + 2] - 49]++;
			} else {
				h[x[i + 2] - 39]++;
			}	
		} else if (x[i] == 'T') {
			if (x[i + 1] == '0') {
				t[x[i + 2] - 49]++;
			} else {
				t[x[i + 2] - 39]++;
			}	
		}
	}
	
	for (int i = 0; i < 13; i++) {
		if (p[i] > 1 || k[i] > 1 || h[i] > 1 || t[i] > 1) {
			pTotal = -1;
			break;
		}
		
		if (p[i] == 1) pTotal--;
		if (k[i] == 1) kTotal--;
		if (h[i] == 1) hTotal--;
		if (t[i] == 1) tTotal--;
	}
	
	if (pTotal == -1) {
		cout << "GRESKA";
	} else {
		cout << pTotal << " " << kTotal << " " << hTotal << " " << tTotal;
	}

	return 0;
}
