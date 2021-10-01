#include <iostream>

using namespace std;

int main() {
	int a, b, c, diff1, diff2;
	
	cin >> a >> b >> c;
	
	diff1 = b - a;
	diff2 = c - b;
	
	if (diff1 > diff2) {
		cout << diff1 - 1;
	} else {
		cout << diff2 - 1;
	}
	
	return 0;
}
