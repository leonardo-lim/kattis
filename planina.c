#include <stdio.h>

int count(int iteration) {
	int point, i;
	point = 2;
	
	for (i = 0; i < iteration; i++) {
		point += (point - 1);
	}
	
	int totalPoints = point * point;
	
	return totalPoints;
} 

int main() {
	int i;
	scanf("%i", &i);
	int result = count(i);
	printf("%i", result);
	
	return 0;
}
