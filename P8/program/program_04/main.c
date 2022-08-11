#include <stdio.h>

#define N ((int)(sizeof(num) / sizeof(num[0])))

int main() {
    int num[10];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    printf("In reverse order:");
    for (int i = N - 1; i >= 0; i--) {
        printf(" %d", num[i]);
    }
    printf("\n");

    return 0;
}
