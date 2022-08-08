#include <stdio.h>

int main() {
    int n, i, odd, square;

    printf("This program prints a tabble of squares.\n");
    printf("nter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2) {
        printf("%10d\t%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}
