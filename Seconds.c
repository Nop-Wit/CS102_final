#include <stdio.h>
int main () {
	int x, i;
	int h=0, m=0, s=0;
	int timesleft;
	
	scanf("%d", &x);
	
	int arr[x];
	
	for (i=0; i<x; i++) {
		scanf("%d/n", &arr[i]);
	}
	
	for (i=0; i<x; i++) {
		h = arr[i] / 3600;
		timesleft = arr[i] % 3600;
		
		m = timesleft / 60;
		timesleft = timesleft % 60;
		
		s = timesleft / 1;
		timesleft = timesleft % 1;
		
		printf("%d %d %d\n", h, m, s);	
	}
	
	return 0;
}
