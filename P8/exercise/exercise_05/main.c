#include <stdio.h>

#define N 40

int main() {
    int fib_number[40] = {0, 1};

    for (int i = 2; i < 40; i++) {
        fib_number[i] = fib_number[i - 1] + fib_number[i - 2];
    }

    for (int i = 0; i < 40; i++) {
        printf("%d ", fib_number[i]);
    }
    printf("\n");

    return 0;
}
