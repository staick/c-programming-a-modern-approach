#include <stdio.h>

int main() {
    float e, min;
    int n, m = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the ɛ: ");
    scanf("%f", &min);

    for (int i = 0; i <= n; i++) {
        m = 1;
        for (int j = i; j > 0; j--) {
            m *= j;
        }
        e += 1 / (float)m;
        if (1 / (float)m < min) {
            break;
        }
    }

    printf("The e approximates to %f\n", e);

    return 0;
}
