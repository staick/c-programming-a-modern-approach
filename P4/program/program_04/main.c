#include <stdio.h>

int main() {
    int num, one, two, three, four, five;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    //printf("In octal, your number is: %05o\n", num);
    
    one = num % 8;
    num /= 8;
    two = num % 8;
    num /= 8;
    three = num % 8;
    num /= 8;
    four = num % 8;
    num /= 8;
    five = num % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", five, four, three, two, one);

    return 0;
}
