#include <iostream>
#include <string>

using namespace std;

int main() {
	int len, count = 0, num1 = 0, num2 = 0;
	string x;
	
	cin >> x;
	
	len = x.size();
	
	for (int i = 0; i < len; i++) {
		if (x[i] == ';') {
			count++;
			num1 = 0;
		} else if (x[i] == '-') {
			i++;
			
			while (x[i] != ';' && i < len) {
				num2 *= 10;
				num2 += x[i] % 48;
				i++;
			}
			
			count += (num2 - num1 + 1);
			num1 = 0;
			num2 = 0;
		} else {
			num1 *= 10;
			num1 += x[i] % 48;
		}
	}
	
	if (num1 > 0) count++;
	
	cout << count;

	return 0;
}
