#include <iostream>
#include <string>

using namespace std;

int main() {
	int l, x, p, current = 0, max, denied = 0;
	string e;
	
	cin >> l >> x;
	
	max = l;
	
	for (int i = 0; i < x; i++) {
		cin >> e >> p;
		
		if (e == "enter") {
			if (current + p <= max) {
				current += p;
			} else {
				denied++;
			}
		} else if (e == "leave") {
			current -= p;
		}
	}
	
	cout << denied;
	
	return 0;
}
