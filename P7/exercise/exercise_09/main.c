#include <stdio.h>

int main() {
    int i = 2;
    int j = 1;

    printf("%zu\n", sizeof(i / j + 'a'));

    return 0;
}
