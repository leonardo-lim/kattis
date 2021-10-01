#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string x;
	
	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, x);
		
		if (x.find("Simon says") != string::npos) {
			cout << x.substr(10, x.size()) << endl;
		}
	}
	
	return 0;
}
