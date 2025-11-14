#include <stdio.h>
int main () {
	int x, i, count=0;
	float mean=0;
	
	scanf("%d", &x);
	
	float arr[x];
	
	for (i=0; i<x; i++) {
		scanf("%f/n", &arr[i]);
	}
	
	for (i=0; i<x; i++) {
		mean = mean + arr[i];	
	}
	
	mean = mean/x;
	
	for (i=0; i<x; i++) {
		if(arr[i]>mean) {
			count++;
		}	
	}
	
	printf("%d", count);
	
	
	return 0;
}
