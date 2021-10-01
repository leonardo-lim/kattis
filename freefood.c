#include <stdio.h>

inline static void ignore() {}

int main() {
	int i, n, s, t, c[366], count = 0;
	
	ignore(scanf("%d", &n));
	
	for (i = 0; i < n; i++) {
		ignore(scanf("%d %d", &s, &t));
		
		while (s <= t) {
			if (c[s] == s) {
				s++;
			} else {
				c[s] = s;
				s++;
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
