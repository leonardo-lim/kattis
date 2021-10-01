#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

int main() {
	double h, v;

	cin >> h >> v;

	cout << ceil(h / (sin((v * PI) / 180)));
	
	return 0;
}
