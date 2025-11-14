#include <stdio.h>
int main() {
	int x, y;
	int count=0;
	scanf("%d %d", &x, &y);
	
	while (x<=y) {
		if(y%x==0) {
			count++;
		}
		x++;
	}
	printf("%d", count);
	
	return 0;
}
