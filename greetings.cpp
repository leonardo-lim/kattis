#include <iostream>
#include <string>

using namespace std;

int main() {
	string x;
	
	cin >> x;
	
	int len = (x.size() - 2) * 2;
	
	cout << "h";
	
	for (int i = 0; i < len; i++) {
		cout << "e";
	}
	
	cout << "y";

	return 0;
}
