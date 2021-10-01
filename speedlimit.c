#include <stdio.h>

int main() {
	int i, n = 0, x[2], total = 0;
	
	while (n != -1) {
		scanf("%i", &n);
		int speed[n], time[n];
		
		if (n != -1) {
			for (i = 0; i < n; i++) {
				scanf("%i %i", &x[0], &x[1]);
				time[i] = x[1];
				
				if (i == 0) {
					total += x[0] * x[1];
				} else {
					total += x[0] * (time[i] - time[i - 1]);
				}
			}
			printf("%i miles\n", total);
			total = 0;
		}
	}
	
	return 0;
}
