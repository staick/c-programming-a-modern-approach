#include <stdio.h>

int main() {
    float num, max = 0.00f;

    do {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max) {
            max = num;
        }
    } while(num > 0.00f);

    printf("The largest number entered was %.2f\n", max);

    return 0;
}
