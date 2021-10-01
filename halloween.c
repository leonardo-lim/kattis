#include <stdio.h>
#include <string.h>

inline static void ignore() {}

int main() {
	int date;
	char month[4];
	
	ignore(scanf("%s %d", month, &date));
	int value1 = strcmp(month, "OCT");
	int value2 = strcmp(month, "DEC");
	
	if (value1 == 0 && date == 31) {
		printf("%s", "yup");
	} else if (value2 == 0 && date == 25) {
		printf("%s", "yup");
	} else {
		printf("%s", "nope");
	}
	
	return 0;
}
