#include <stdio.h>

inline static void ignore() {}

int main() {
	int i, n, x, count = 0;
	float result, total = 0.0;
	
	ignore(scanf("%d", &n));
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%d", &x));
		
		if (x == -1) {
			count++;
		} else {
			total += x;
		}
	}
	
	result = total / (n - count);
	printf("%f", result);
	
	return 0;
}
