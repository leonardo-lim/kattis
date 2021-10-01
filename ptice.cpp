#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, j = 0, pointA = 0, pointB = 0, pointC = 0;
	string x, a, b, c;
	
	a[0] = 'A'; a[1] = 'B'; a[2] = 'C';
	b[0] = 'B'; b[1] = 'A'; b[2] = 'B'; b[3] = 'C';
	c[0] = 'C'; c[1] = 'C'; c[2] = 'A'; c[3] = 'A'; c[4] = 'B'; c[5] = 'B';
	
	cin >> n >> x;
	
	for (int i = 0; i < n; i++) {
		if (x[i] == a[j]) {
			pointA++;
		}
				
		j++;
		
		if (j == 3) {
			j = 0;
		}
	}
	
	j = 0;

	for (int i = 0; i < n; i++) {
		if (x[i] == b[j]) {
			pointB++;
		}
		
		j++;
		
		if (j == 4) {
			j = 0;
		}
	}
	
	j = 0;
	
	for (int i = 0; i < n; i++) {
		if (x[i] == c[j]) {
			pointC++;
		}
		
		j++;
		
		if (j == 6) {
			j = 0;
		}
	}

	if (pointA == pointB && pointB == pointC) {
		cout << pointA << endl;
		cout << "Adrian" << endl << "Bruno" << endl << "Goran";
	} else if (pointA == pointB) {
		if (pointA > pointC) {
			cout << pointA << endl;
			cout << "Adrian" << endl << "Bruno";
		} else {
			cout << pointC << endl;
			cout << "Goran";
		}
	} else if (pointA == pointC) {
		if (pointA > pointB) {
			cout << pointA << endl;
			cout << "Adrian" << endl << "Goran";
		} else {
			cout << pointB << endl;
			cout << "Bruno";
		}
	} else if (pointB == pointC) {
		if (pointB > pointA) {
			cout << pointB << endl;
			cout << "Bruno" << endl << "Goran";
		} else {
			cout << pointA << endl;
			cout << "Adrian";
		}
	} else {
		if (pointA > pointB && pointA > pointC) {
			cout << pointA << endl;
			cout << "Adrian";
		} else if (pointB > pointA && pointB > pointC) {
			cout << pointB << endl;
			cout << "Bruno";
		} else {
			cout << pointC << endl;
			cout << "Goran";
		}
	}
	
	return 0;
}
