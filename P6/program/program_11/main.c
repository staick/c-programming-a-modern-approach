#include <stdio.h>

int main() {
    float e;
    int n, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        m = 1;
        for (int j = i; j > 0; j--) {
            m *= j;
        }
        e += 1.0f / m; 
    }

    printf("The e approximates to %f\n", e);

    return 0;
}
