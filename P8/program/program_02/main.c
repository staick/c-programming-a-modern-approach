#include <stdio.h>
#include <stdbool.h>

int main() {
    int digit, digit_seen[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i = 0; i < 10; i++) {
        printf(" %d", i);
    }
    printf("\nOccurrences:");

    for (int i = 0; i < 10; i++) {
        printf(" %d", digit_seen[i]);
    }
    printf("\n");

    return 0;
}
