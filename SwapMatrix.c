#include <stdio.h>
int main() {
	int arr[4][5];
	int i,j;
	int a,b,c,d;
	int swap,max;
	
	for (i=0; i<4; i++) {
		for (j=0; j<5; j++) {
			scanf("%d", &arr[i][j]);
		}	
	}
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	swap = arr[a][b];
	arr[a][b] = arr[c][d];
	arr[c][d] = swap;
	
	for (i=0; i<4; i++) {
		max = arr[i][0];
		
		for (j=0; j<5; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
				
		printf("%d ", max);	
	}
	
	return 0;
}
