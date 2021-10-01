#include <iostream>
#include <string>

using namespace std;

int main() {
	int pos = 1;
	string x;
	
	cin >> x;
	
	int length = x.size();
	
	for (int i = 0; i < length; i++) {
		if (pos == 1) {
			if (x[i] == 'A') {
				pos = 2;
			} else if (x[i] == 'C') {
				pos = 3;
			}
		} else if (pos == 2) {
			if (x[i] == 'A') {
				pos = 1;
			} else if (x[i] == 'B') {
				pos = 3;
			}
		} else if (pos == 3) {
			if (x[i] == 'B') {
				pos = 2;
			} else if (x[i] == 'C') {
				pos = 1;
			}
		}
	}
	
	cout << pos;
	
	return 0;
}
