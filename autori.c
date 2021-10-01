#include <stdio.h>
#include <string.h>

int main() {
	char name[101];
	int i;
	
	scanf("%s", name);
	printf("%c", name[0]);
	
	int length = strlen(name);
	
	for (i = 0; i < length; i++) {
		if (name[i] == '-') {
			printf("%c", name[i+1]);
		}
	}
	
	return 0;
}
