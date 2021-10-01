#include <stdio.h>
#include <math.h>

static inline void ignore() {}

int calc(int x, int y) {
	int total = pow(x, y);
	return total;
}

int main() {
	int n, i, c[n], d[n];
	int x;
	int total = 0;
	
	ignore(scanf("%d", &n));
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%d", &x));
		c[i] = x / 10;
		d[i] = x % 10;

		int result = calc(c[i], d[i]);
		total += result;
	}
	
	printf("%d", total);
	
	return 0;
}
