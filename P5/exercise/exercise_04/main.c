#include <stdio.h>

int main() {
    int i = 3;
    int j = 2;
    int result;

    result = i < j ? -1 : i > j;
    printf("%d\n", result);

    return 0;
}
