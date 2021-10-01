#include <stdio.h>

int main() {
	int i, x, c[2];
	
	for (i = 0; i < 2; i++) {
		scanf("%i", &x);
		c[i] = x;
	}
	
	if (c[0] >= 0 && c[0] <= 23 && c[1] >= 0 && c[1] <= 59) {
		if (c[1] >= 45) {
			printf("%i ", c[0]);
			printf("%i", c[1] - 45);
		} else if (c[0] == 0 && c[1] < 45) {
			printf("23 ");
			printf("%i", (c[1] - 45) + 60);
		} else if (c[1] < 45) {
			printf("%i ", c[0] - 1);
			printf("%i", (c[1] - 45) + 60);
		}
	}
	
	return 0;
	
}
