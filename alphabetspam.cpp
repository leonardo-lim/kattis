#include <iostream>
#include <string>

using namespace std;

int main() {
	string x;
	int a = 0, b = 0, c = 0, d = 0;
	
	cin >> x;
	
	int size = x.size();
	
	for (int i = 0; i < size; i++) {
		if (x[i] == '_') {
			a++;
		} else if (x[i] >= 97 && x[i] <= 122) {
			b++;
		} else if (x[i] >= 65 && x[i] <= 90) {
			c++;
		} else if (x[i] >= 33 && x[i] <= 64 || x[i] >= 91 && x[i] <= 96 || x[i] >= 123) {
			d++;
		}
	}
	
	cout << (double) a / size << endl;
	cout << (double) b / size << endl;
	cout << (double) c / size << endl;
	cout << (double) d / size << endl;
	
	return 0;
}
