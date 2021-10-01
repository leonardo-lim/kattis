#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, s, size, b[1005] = {0}, r[1005] = {0}, x = 0, y = 0, m = 1, total = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		
		string l;
		
		if (s == 1) {
			cin >> l;
		} else {
			for (int j = 0; j < s; j++) {
				cin >> l;
				
				if (l.back() == 'B') {
					b[x] = stoi(l);
					x++;
				} else {
					r[y] = stoi(l);
					y++;
				}
			}
					
			sort(b, b + x, greater<int>());
			sort(r, r + y, greater<int>());
			
			size = min(x, y);
			
			for (int c = 0; c < size; c++) {
				total += (b[c] - 1);
				total += (r[c] - 1);
			}
		}
		
		cout << "Case #" << m << ": " << total << endl;
		m++;
		
		total = 0;
		x = 0;
		y = 0;
	}

	return 0;
}
