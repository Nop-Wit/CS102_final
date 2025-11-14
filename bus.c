#include <stdio.h>
int main() {
    int input;
    int sum = 0, ans = 0, plus = 0;

    scanf("%d", &input);

    while (input>0) {
        sum = sum + (input%10);
        input = input/10;
    }

    while (sum>0) {
        plus = plus + (sum%10);
        sum = sum/10;
    }

    while (plus>0) {
        ans = ans + (plus%10);
        plus = plus/10;
    }

    printf("%d", ans);

    return 0;
}