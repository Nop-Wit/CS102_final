#include <stdio.h>
int main() {
    int x, y;
    int i, j;
    int count = 1;

    scanf("%d", &x);
    scanf("%d", &y);

    int arr[x][y];

    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            if (j%2==0) {
                printf("@");
            } else {
                printf("#");
            }

            if (count%y==0) {
                printf("\n");
            }

            count++;
        }
    }

    return 0;
}