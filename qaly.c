#include <stdio.h>

static inline void ignore() {}

double multiply(double x, double y) {
	double total;
	total = x * y;
	return total;
}

int main() {
	int i, n;
	double p, v, total = 0.0;
	
	ignore(scanf("%d", &n));
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%lf %lf", &p, &v));
		double result = multiply(p, v);
		total += result;
	}
	
	printf("%f", total);
	
	return 0;
}
