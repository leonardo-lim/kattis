#include <bits/stdc++.h>

using namespace std;

int main() {
	int lengthA, lengthB, max, j, num;
	bool res;
	string a, b, x, total;
	
	cin >> a >> b;
	
	lengthA = a.size();
	lengthB = b.size();
	
	if (lengthA > lengthB) {
		max = lengthA - 1;
		j = lengthB - 1;
	} else {
		max = lengthB - 1;
		j = lengthA - 1;
		swap(a, b);
	}
	
	
	for (int i = max; i >= 0; i--) {
		if (j < 0) {
			num = a[i] % 48;
		} else {
			num = a[i] % 48 + b[j] % 48;
		}
		
		if (res) num++;
		
		if (num >= 10) {
			num -= 10;
			res = 1;
		} else {
			res = 0;
		}

		x = num + 48;
		total.insert(0, x);
		j--;
	}
	
	if (res) {
		total.insert(0, "1");
	}
	
	cout << total;

	return 0;
}
