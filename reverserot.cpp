#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, length;
	string x;
	
	while (cin >> n) {
		if (n == 0) break;
		
		cin >> x;
		
		reverse(x.begin(), x.end());
		
		length = x.size();
		
		for (int i = 0; i < length; i++) {
			if (x[i] == '_') x[i] -= 4;
			else if (x[i] == '.') x[i] += 46;

			x[i] += n;
			
			while (x[i] > 92) {
				x[i] -= 28;
			}
			
			if (x[i] == '[') x[i] += 4;
			else if (x[i] == '\\') x[i] -= 46;
		}
		
		cout << x << endl;
	}

	return 0;
}
