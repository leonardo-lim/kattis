#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a;
	cin >> b;
	
	if (a.size() >= b.size()) {
		cout << "go";
	} else if (b.size() > a.size()){
		cout << "no";
	}
	
	return 0;
}
