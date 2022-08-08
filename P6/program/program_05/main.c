#include <stdio.h>

int main() {
    int num, rem, reverse = 0;

    printf("Enter a two-digit numver: ");
    scanf("%d", &num);
    do {
        rem = num % 10;
        num /= 10;
        reverse = reverse * 10 + rem;

    } while (num);
    
    printf("The reversal is: %d\n", reverse);

    return 0;
}
