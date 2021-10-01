#include <iostream>

using namespace std;

int main() {
	int m, total = 0, solved = 0;
	char p, a[26] = {0};
	string r;
	
	while (true) {
		cin >> m;
		
		if (m == -1) {
			break;
		} else {
			cin >> p >> r;
		}
		
		if (r == "right") {
			if (a[p % 65] != -1) {
				total += m;
				total += (a[p % 65] * 20);
				a[p % 65] = -1;
				solved++;
			}
		} else {
			a[p % 65]++;
		}
	}
	
	cout << solved << " " << total;

	return 0;
}

