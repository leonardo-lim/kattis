#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char word[31];
	
	scanf("%s", word);
	
	int size = strlen(word);
	
	for (i = 0; i < size; i++) {
		if (word[i] == 's') {
			i++;
			if (word[i] == 's') {
				printf("%s", "hiss");
				break;
			} else if (i == size - 1) {
				printf("%s", "no hiss");
			}
			i--;
		}

		if (i == size - 1 && word[i - 1] != 's') {
			printf("%s", "no hiss");
		}
	}	
	
	return 0;
}
