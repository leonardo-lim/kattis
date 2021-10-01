#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, j = 1;
	string result;
	
	cin >> n;
	
	string name[n];
	
	for (int i = 0; i < n; i++) {
		cin >> name[i];	
	}
	
	if (name[j] > name[j-1]) {
		while (name[j] > name[j-1]) {
			if (j == n - 1) {
				result = "INCREASING";
				break;
			}
			j++;
		}
	} else 	{ 
		while (name[j] < name[j-1]) {
			if (j == n - 1) {
				result = "DECREASING";
				break;
			}
			j++;
		}
	}
	
	if (result == "") {
		result = "NEITHER";
	}
	
	cout << result;

	return 0;
}
