#include <stdio.h>

int main() {
	int i, x, rev = 0, remainder, result[2];
	
	for (i = 0; i < 2; i++) {
		scanf("%i", &x);
		
		while (x != 0) {
			remainder = x % 10;
			rev = rev * 10 + remainder;
			x /= 10;
		}
				
		result[i] = rev;
		rev = 0;
	}
	
	if (result[0] > result[1]) {
		printf("%i", result[0]);
	} else if (result[1] > result[0]) {
		printf("%i", result[1]);
	}
	
	return 0;
}
