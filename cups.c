#include <stdio.h>
#include <string.h>

static inline void ignore() {}

int main() {
	int i, j = 0, k, l, m, n, temp = 0, c;
	char x[1001], y[1001];
	
	ignore(scanf("%d", &n));
	
	int number[n];
	char word[n][1001], d[n][1001];
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%s %s", x, y));
		
		if (x[0] < 97) {
			while (x[j]) {
				temp *= 10;
				temp += x[j] % 48;
				j++;
			}
			temp /= 2;
			number[i] = temp;
			strcpy(word[i], y);
		} else {
			while (y[j]) {
				temp *= 10;
				temp += y[j] % 48;
				j++;
			}
			number[i] = temp;
			strcpy(word[i], x);
		}
		temp = 0;
		j = 0;
	}
		
	for (l = 1; l < n; l++) {
		for (m = 0; m < l; m++) {
			if (number[m] > number[l]) {
				c = number[m];
				number[m] = number[l];
				number[l] = c;
				
				strcpy(d[m], word[m]);
				strcpy(word[m], word[l]);
				strcpy(word[l], d[m]);
			}
		}
	}
	
	for (k = 0; k < n; k++) {
		printf("%s\n", word[k]);
	}
	
	return 0;
}
