#include <stdio.h>

int main() {
    int m, n, r;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while(n) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
