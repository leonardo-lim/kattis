#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, a[4][4], temp[4], l;
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a[i][j];
		}
	}
	
	cin >> x;
	
	if (x == 0) {
		l = 0;
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (a[i][j] != 0) {
					if (a[i][j] == a[i][j + 1]) {
						a[i][j] += a[i][j + 1];
						a[i][j + 1] = 0;
					} else if (a[i][j + 1] == 0) {
						for (int k = j + 2; k < 4; k++) {
							if (a[i][k] != 0 && a[i][j] == a[i][k]) {
								a[i][j] += a[i][k];
								a[i][k] = 0;
								break;
							}
						}
					}
				}
			}
			
			for (int j = 0; j < 4; j++) {
				if (a[i][j] != 0) {
					temp[l] = a[i][j];
					a[i][j] = 0;
					l++;
				}
			}
			
			for (int j = 0; j < l; j++) {
				a[i][j] = temp[j];
			}
			
			l = 0;
		}
	} else if (x == 1) {
		l = 0;
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (a[j][i] != 0) {
					if (a[j][i] == a[j + 1][i]) {
						a[j][i] += a[j + 1][i];
						a[j + 1][i] = 0;
					} else if (a[j + 1][i] == 0) {
						for (int k = j + 2; k < 4; k++) {
							if (a[k][i] != 0 && a[j][i] == a[k][i]) {
								a[j][i] += a[k][i];
								a[k][i] = 0;
								break;
							}
						}
					}
				}
			}
			
			for (int j = 0; j < 4; j++) {
				if (a[j][i] != 0) {
					temp[l] = a[j][i];
					a[j][i] = 0;
					l++;
				}
			}
			
			for (int j = 0; j < l; j++) {
				a[j][i] = temp[j];
			}
			
			l = 0;
		}
	} else if (x == 2) {
		l = 3;
		
		for (int i = 3; i >= 0; i--) {
			for (int j = 3; j > 0; j--) {
				if (a[i][j] != 0) {
					if (a[i][j] == a[i][j - 1]) {
						a[i][j] += a[i][j - 1];
						a[i][j - 1] = 0;
					} else if (a[i][j - 1] == 0) {
						for (int k = j - 2; k >= 0; k--) {
							if (a[i][k] != 0 && a[i][j] == a[i][k]) {
								a[i][j] += a[i][k];
								a[i][k] = 0;
								break;
							}
						}
					}
				}
			}
			
			for (int j = 3; j >= 0; j--) {
				if (a[i][j] != 0) {
					temp[l] = a[i][j];
					a[i][j] = 0;
					l--;
				}
			}
			
			for (int j = 3; j > l; j--) {
				a[i][j] = temp[j];
			}
			
			l = 3;
		}
	} else {
		l = 3;
		
		for (int i = 3; i >= 0; i--) {
			for (int j = 3; j > 0; j--) {
				if (a[j][i] != 0) {
					if (a[j][i] == a[j - 1][i]) {
						a[j][i] += a[j - 1][i];
						a[j - 1][i] = 0;
					} else if (a[j - 1][i] == 0) {
						for (int k = j - 2; k >= 0; k--) {
							if (a[k][i] != 0 && a[j][i] == a[k][i]) {
								a[j][i] += a[k][i];
								a[k][i] = 0;
								break;
							}
						}
					}
				}
			}
			
			for (int j = 3; j >= 0; j--) {
				if (a[j][i] != 0) {
					temp[l] = a[j][i];
					a[j][i] = 0;
					l--;
				}
			}
			
			for (int j = 3; j > l; j--) {
				a[j][i] = temp[j];
			}
			
			l = 3;
		}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j != 3) {
				cout << a[i][j] << " ";
			} else {
				cout << a[i][j] << endl;
			}
		}
	}

	return 0;
}
