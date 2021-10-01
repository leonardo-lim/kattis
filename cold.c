#include <stdio.h>

int main() {
	int n, i, x, days = 0;
	scanf("%i", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%i", &x);
		
		if (x < 0) {
			days++;
		}
	}
	
	printf("%i", days);
	
	return 0;
}
