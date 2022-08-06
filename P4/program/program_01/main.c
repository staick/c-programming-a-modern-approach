#include <stdio.h>

int main() {
    int num, first, second;

    printf("Enter a two-digit numver: ");
    scanf("%d", &num);

    first = num / 10;
    second = num % 10;
    num = first + second * 10;

    printf("The reversal is: %d\n", num);

    return 0;
}
