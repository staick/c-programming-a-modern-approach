#include <stdio.h>

int main() {
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in tabbble: ");
    scanf("%d", &n);

    odd = 3;
    for (square = 1, i = 1; i <= n; ++i, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
