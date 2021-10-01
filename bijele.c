#include <stdio.h>

int main() {
	int i, x, c[6];
	
	for (i = 0; i < 6; i ++) {
		scanf("%i", &x);
		c[i] = x;
	}
	
	printf("%i ", -c[0] + 1);
	printf("%i ", -c[1] + 1);
	printf("%i ", -c[2] + 2);
	printf("%i ", -c[3] + 2);
	printf("%i ", -c[4] + 2);
	printf("%i", -c[5] + 8);
	
	return 0;
}
