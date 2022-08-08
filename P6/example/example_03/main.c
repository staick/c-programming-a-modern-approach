#include <stdio.h>

int main() {
    int num, digit = 0;

    printf("Enter a nonegative integer: ");
    scanf("%d", &num);

    do {
        num /= 10;
        digit++;
    } while(num > 0);

    printf("The number has %d digit(s).\n", digit);

    return 0;
}
