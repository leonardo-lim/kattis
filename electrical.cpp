#include <iostream>

using namespace std;

int main() {
	int n, k, o, outlet = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		
		for (int j = 0; j < k; j++) {
			cin >> o;
			
			outlet += o;
		}
		
		cout << outlet - k + 1 << endl;
		outlet = 0;
	}

	return 0;
}
