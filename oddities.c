#include <stdio.h>

int main() {
	int n, i, j, k, x;
	scanf("%i", &n);
	int container[n];
	
	for (i = 0; i < n; i++) {
		scanf("%i", &x);
		container[i] = x;
	}
	
	for (k = 0; k < n; k++) {
		if (container[k] % 2 == 1 || container[k] %2 == -1) {
			printf("%i is odd\n", container[k]);
		} else if (container[k] % 2 == 0) {
			printf("%i is even\n", container[k]);
		}
	}
	
	return 0;
}
