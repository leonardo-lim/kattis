#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, j, total = 0;
	
	cin >> n;
	
	string x[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		
		for (j = 0; j < x[i].size(); j++) {
			if (x[i][j] == 'p' || x[i][j] == 'P') {
				j++;
				if (x[i][j] == 'i' || x[i][j] == 'I') {
					j++;
					if (x[i][j] == 'n' || x[i][j] == 'N') {
						j++;
						if (x[i][j] == 'k' || x[i][j] == 'K') {
							total++;
							break;
						} else {
							j -= 3;
						}
					} else {
						j -= 2;
					}
				} else {
					j--;
				}
			} else if (x[i][j] == 'r' || x[i][j] == 'R') {
				j++;
				if (x[i][j] == 'o' || x[i][j] == 'O') {
					j++;
					if (x[i][j] == 's' || x[i][j] == 'S') {
						j++;
						if (x[i][j] == 'e' || x[i][j] == 'E') {
							total++;
							break;
						} else {
							j -= 3;
						}
					} else {
						j -= 2;
					}
				} else {
					j--;
				}
			} 
		}
		j = 0;
		
	}
	
	if (total == 0) {
		cout << "I must watch Star Wars with my daughter";
	} else {
		cout << total;
	}
	
	return 0;
}
