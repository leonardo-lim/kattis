#include <stdio.h>
#include <string.h>

static inline void ignore() {}

int main() {
	int i, total = 0;
	int t = 0, c = 0, g = 0;
	int tc = 0, cc = 0, gc = 0;
	char type[51];
	
	ignore(scanf("%s", type));
	
	int length = strlen(type);
	
	for (i = 0; i < length; i++) {
		if (type[i] == 'T') {
			t++;
			tc++;
		} else if (type[i] == 'C') {
			c++;
			cc++;
		} else if (type[i] == 'G') {
			g++;
			gc++;
		}
		
		if (tc > 0 && cc > 0 && gc > 0) {
			total += 7;
			tc--;
			cc--;
			gc--;
		}
	}
	
	total += t * t;
	total += c * c;
	total += g * g;
	
	printf("%d", total);	
	
	return 0;
}
