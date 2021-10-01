#include <stdio.h>

inline static void ignore() {}

int main() {
	int i, n;
	float c, w, l, total = 0.0;
	
	ignore(scanf("%f", &c));
	ignore(scanf("%d", &n));
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%f %f", &w, &l));
		
		total += w * l * c;
	}
	
	printf("%f", total);
	
	return 0;
}
