#include <iostream>

using namespace std;

int number(int a, int b) {
	int result = (a < b) ? b : a;
	return result;
}

int main() {
	int n, h, v, volume;
	
	cin >> n >> h >> v;
	
	volume = number(n - h, h) * number(n - v, v) * 4;
	
	cout << volume;
	
	return 0;
}
