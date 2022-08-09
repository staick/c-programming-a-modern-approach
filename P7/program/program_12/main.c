#include <stdio.h>

int main() {
    float num1, num2, num3, value;
    char sign1, sign2;

    printf("Enter a expression: ");
    scanf("%f%c%f%c%f", &num1, &sign1, &num2, &sign2, &num3);

    switch(sign1) {
        case '+':
            value = num1 + num2;
            break;
        case '-':
            value = num1 - num2;
            break;
        case '*':
            value = num1 * num2;
            break;
        case '/':   value = num1 / num2;
            break;
    }

    switch (sign2) {
        case '+':   value += num3;  break;
        case '-':   value -= num3;  break;
        case '*':   value *= num3;  break;
        case '/':   value /= num3;  break;
    }

    printf("Value of expression: %.1f\n", value);

    return 0;
}
