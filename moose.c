#include <stdio.h>

static inline void ignore() {}

int main() {
	int l, r, points;
	
	ignore(scanf("%d %d", &l, &r));
	
	if (l > r) {
		points = l * 2;
	} else {
		points = r * 2;
	}
	
	if (l != r) {
		printf("Odd %d", points);
	} else if (l != 0) {
		printf("Even %d", points);
	} else {
		printf("Not a moose");
	}
		
	return 0;
}
