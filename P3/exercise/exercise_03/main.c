#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("a is %d\n", a);
    
    printf("Enter a: ");
    scanf(" %d", &a);
    printf("a is %d\n", a);

    printf("Enter b: ");
    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
    printf("b is %d-%d-%d-%d", a, b, c, d);

    printf("Enter b: ");
    scanf("%d -%d -%d -%d", &a, &b, &c, &d);
    printf("b is %d-%d-%d-%d", a, b, c, d);

    return 0;
}
