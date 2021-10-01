#include <iostream>
#include <string>

using namespace std;

int main() {
	int r, c, zr, zc;
	
	cin >> r >> c >> zr >> zc;
	
	string x[r];
	
	for (int i = 0; i < r; i++) {
		cin >> x[i];
	}
	
	for (int i = 0; i < r * zr; i++) {
		for (int j = 0; j < c * zc; j++) {
			cout << x[i / zr][j / zc]; 
		}
		cout << endl;
	}
	
	return 0;
}
