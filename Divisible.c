#include <stdio.h>
int main() {
	int a, b, d;
	int count=0;
	scanf("%d %d %d", &a, &b, &d);
	
	while (a<=b) {
		if(a%d==0) {
			count++;
		}
		a++;
	}
	printf("%d", count);
	
	return 0;
}
