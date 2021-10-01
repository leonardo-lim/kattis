#include <iostream>

using namespace std;

int main() {
	int e, f, c, count = 0;
	
	cin >> e >> f >> c;
	
	e += f;
	
	while (e >= c) {
		e -= c;
		e++;
		count++;
	}
	
	cout << count;

	return 0;
}

