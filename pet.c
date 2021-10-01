#include <stdio.h>

int count(int p0, int p1, int p2, int p3) {
	int total;
	total = p0 + p1 + p2 + p3;
	return total;
}

int main() {
	int i, j, p[4], c[5][4];
	
	for (i = 0; i < 5; i++) {
		scanf("%i %i %i %i", &p[0], &p[1], &p[2], &p[3]);
		if (p[i] >= 1 && p[i] <= 5) {
			c[i][0] = p[0];
			c[i][1] = p[1];
			c[i][2] = p[2];
			c[i][3] = p[3];
		}
	}
	
	int r0 = count(c[0][0], c[0][1], c[0][2], c[0][3]);
	int r1 = count(c[1][0], c[1][1], c[1][2], c[1][3]);
	int r2 = count(c[2][0], c[2][1], c[2][2], c[2][3]);
	int r3 = count(c[3][0], c[3][1], c[3][2], c[3][3]);
	int r4 = count(c[4][0], c[4][1], c[4][2], c[4][3]);
	
	if (r0 > r1 && r0 > r2 && r0 > r3 && r0 > r4) {
		printf("1 %i", r0);
	} else if (r1 > r0 && r1 > r2 && r1 > r3 && r1 > r4) {
		printf("2 %i", r1);		
	} else if (r2 > r0 && r2 > r1 && r2 > r3 && r2 > r4) {
		printf("3 %i", r2);		
	} else if (r3 > r0 && r3 > r1 && r3 > r2 && r3 > r4) {
		printf("4 %i", r3);		
	} else if (r4 > r0 && r4 > r1 && r4 > r2 && r4 > r3) {
		printf("5 %i", r4);
	}
	
	return 0;
}
