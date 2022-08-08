#include <stdio.h>

int main() {
    int n, i;

    printf("This program prints a tabble of squares.\n");
    printf("nter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d\t%10d\n", i, i * i);
    }

    return 0;
}
