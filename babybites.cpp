#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string x;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> x;
		
		if (x[0] < 65) {
			if (stoi(x) != i) {
				cout << "something is fishy";
				break;
			}
		}
		
		if (i == n) {
			cout << "makes sense";
		}
	}

	return 0;
}
