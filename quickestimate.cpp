#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string x[100];
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	
	for (int j = 0; j < n; j++) {
		cout << x[j].size() << endl;
	}
	
	return 0;
}
