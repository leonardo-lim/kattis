#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	
	priority_queue<pair<string, int>, vector<pair<string, int>>, greater<pair<string, int>>> pq;
	
	cin >> n;
	
	int c[n];
	string x[n], y[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> c[i] >> y[i];
		
		for (int j = 0; j < i; j++) {
			if (y[i] == y[j]) {
				if (c[i] > c[j]) {
					c[j] = -1;
				} else {
					c[i] = -1;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (c[i] != -1) {
			pq.push({x[i], c[i]});
		}
	}
	
	cout << pq.size() << endl;
	
	while (!pq.empty()) {
		cout << pq.top().first << endl;
		pq.pop();
	}

	return 0;
}
