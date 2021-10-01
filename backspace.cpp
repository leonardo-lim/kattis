#include <iostream>
#include <string>

using namespace std;

int main() {
	int len, j = 0;
	string x, y = "";
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == '<') {
			y.pop_back();
		} else {
			y += x[i];
		}
	}
	
	cout << y;

	return 0;
}
