#include <bits/stdc++.h>

using namespace std;

int main() {
	int length, k = 0, line[5];
	string x;
	
	for (int i = 0; i < 5; i++) {
		cin >> x;
		
		length = x.size();
		
		for (int j = 0; j < length; j++) {
			if (x[j] == 'F' && x[j + 1] == 'B' && x[j + 2] == 'I') {
				line[k] = i + 1;
				k++;
			}
		}
	}
	
	if (k > 0) {
		for (int i = 0; i < k; i++) {
			cout << line[i];
			
			if (i != k - 1) {
				cout << " ";
			}
		}
	} else {
		cout << "HE GOT AWAY!";
	}

	return 0;
}
