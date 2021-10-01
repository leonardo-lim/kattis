#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, length;
	
	cin >> n;
	
	string x, y;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;
		
		cout << x << endl;
		cout << y << endl;
		
		length = x.size();
		
		for (int j = 0; j < length; j++) {
			if (x[j] == y[j]) {
				cout << ".";
			} else {
				cout << "*";
			}
		}
		
		cout << endl << endl;
	}
	
	return 0;
}
