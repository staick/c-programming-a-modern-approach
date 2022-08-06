#include <stdio.h>

int main() {
    int num, first, second, third;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first = num / 100;
    second = num / 10 % 10;
    third = num % 10;
    num = first + second * 10 + third * 100;

    printf("The reversal is: %d\n", num);

    return 0;
}
