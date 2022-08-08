#include <stdio.h>

int main() {
    int num, den, rem, m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    m = num;
    n = den;
    while (n) {
        rem = m % n;
        m = n;
        n = rem;
    }

    num /= m;
    den /= m;
    printf("In lowest terms: %d/%d\n", num, den);

    return 0;
}
