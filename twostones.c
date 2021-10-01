#include <stdio.h>

int main() {
	int n;
	
	scanf("%i", &n);
	
	if (n % 2 == 1 && n >= 1) {
		printf("Alice");
	} else if (n % 2 == 0 && n >=1) {
		printf("Bob");
	}
	
	return 0;
}
