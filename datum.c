#include <stdio.h>

static inline void ignore() {}

int main() {
	int x, y;
	ignore(scanf("%d %d", &x, &y));
	
	if (x > 0 && x <= 31 && y > 0) {
		if ((y == 4 || y == 6 || y == 9 || y == 11) && x > 30) {
			return 0;
		} else if (y == 2 && x > 28) {
			return 0;	
		}
		
		if (y == 1 || y == 10) {
			if (x % 7 == 1) {
				printf("%s", "Thursday");
			} else if (x % 7 == 2) {
				printf("%s", "Friday");
			} else if (x % 7 == 3) {
				printf("%s", "Saturday");			
			} else if (x % 7 == 4) {
				printf("%s", "Sunday");			
			} else if (x % 7 == 5) {
				printf("%s", "Monday");			
			} else if (x % 7 == 6) {
				printf("%s", "Tuesday");			
			} else if (x % 7 == 0) {
				printf("%s", "Wednesday");			
			}
		} else if (y == 2 || y == 3 || y == 11) {
			if (x % 7 == 1) {
				printf("%s", "Sunday");
			} else if (x % 7 == 2) {
				printf("%s", "Monday");
			} else if (x % 7 == 3) {
				printf("%s", "Tuesday");			
			} else if (x % 7 == 4) {
				printf("%s", "Wednesday");			
			} else if (x % 7 == 5) {
				printf("%s", "Thursday");			
			} else if (x % 7 == 6) {
				printf("%s", "Friday");			
			} else if (x % 7 == 0) {
				printf("%s", "Saturday");			
			}
		} else if (y == 4 || y == 7) {
			if (x % 7 == 1) {
				printf("%s", "Wednesday");
			} else if (x % 7 == 2) {
				printf("%s", "Thursday");
			} else if (x % 7 == 3) {
				printf("%s", "Friday");			
			} else if (x % 7 == 4) {
				printf("%s", "Saturday");			
			} else if (x % 7 == 5) {
				printf("%s", "Sunday");			
			} else if (x % 7 == 6) {
				printf("%s", "Monday");			
			} else if (x % 7 == 0) {
				printf("%s", "Tuesday");			
			}
		} else if (y == 5) {
			if (x % 7 == 1) {
				printf("%s", "Friday");
			} else if (x % 7 == 2) {
				printf("%s", "Saturday");
			} else if (x % 7 == 3) {
				printf("%s", "Sunday");			
			} else if (x % 7 == 4) {
				printf("%s", "Monday");			
			} else if (x % 7 == 5) {
				printf("%s", "Tuesday");			
			} else if (x % 7 == 6) {
				printf("%s", "Wednesday");			
			} else if (x % 7 == 0) {
				printf("%s", "Thursday");			
			}
		} else if (y == 6) {
			if (x % 7 == 1) {
				printf("%s", "Monday");
			} else if (x % 7 == 2) {
				printf("%s", "Tuesday");
			} else if (x % 7 == 3) {
				printf("%s", "Wednesday");			
			} else if (x % 7 == 4) {
				printf("%s", "Thursday");			
			} else if (x % 7 == 5) {
				printf("%s", "Friday");			
			} else if (x % 7 == 6) {
				printf("%s", "Saturday");			
			} else if (x % 7 == 0) {
				printf("%s", "Sunday");			
			}
		} else if (y == 8) {
			if (x % 7 == 1) {
				printf("%s", "Saturday");
			} else if (x % 7 == 2) {
				printf("%s", "Sunday");
			} else if (x % 7 == 3) {
				printf("%s", "Monday");			
			} else if (x % 7 == 4) {
				printf("%s", "Tuesday");			
			} else if (x % 7 == 5) {
				printf("%s", "Wednesday");			
			} else if (x % 7 == 6) {
				printf("%s", "Thursday");			
			} else if (x % 7 == 0) {
				printf("%s", "Friday");			
			}
		} else if (y == 9 || y == 12) {
			if (x % 7 == 1) {
				printf("%s", "Tuesday");
			} else if (x % 7 == 2) {
				printf("%s", "Wednesday");
			} else if (x % 7 == 3) {
				printf("%s", "Thursday");			
			} else if (x % 7 == 4) {
				printf("%s", "Friday");			
			} else if (x % 7 == 5) {
				printf("%s", "Saturday");			
			} else if (x % 7 == 6) {
				printf("%s", "Sunday");			
			} else if (x % 7 == 0) {
				printf("%s", "Monday");			
			}
		}
	}
	
	return 0;
	
}
