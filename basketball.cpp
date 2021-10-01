#include <iostream>

using namespace std;

int main() {
	int pointA = 0, pointB = 0;
	string x;
	
	cin >> x;
	
	int length = x.size();
	
	for (int i = 0; i <= length; i += 2) {
		if (pointA > 10 && pointA - pointB > 1) {
			cout << "A";
			break;
		} else if (pointB > 10 && pointB - pointA > 1) {
			cout << "B";
			break;
		}
		
		if (x[i] == 'A') {
			if (x[i + 1] == '1') {
				pointA++;
			} else if (x[i + 1] == '2') {
				pointA += 2;
			}
		} else {
			if (x[i + 1] == '1') {
				pointB++;
			} else if (x[i + 1] == '2') {
				pointB += 2;
			}
		}
	}

	return 0;
}

