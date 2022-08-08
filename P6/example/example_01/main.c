#include <stdio.h>

int main() {
    int n, i;

    printf("This program prints a tabble of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) {
        printf("%10d\t%10d\n", i, i * i);
        i++;
    }

    return 0;
}
