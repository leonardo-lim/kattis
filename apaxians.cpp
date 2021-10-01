#include <iostream>

using namespace std;

int main() {
	string x;
	
	cin >> x;
	
	int length = x.size();
	
	for (int i = 0; i < length; i++) {
		if (x[i] != x[i + 1]) {
			cout << x[i];
		}
	}

	return 0;
}
