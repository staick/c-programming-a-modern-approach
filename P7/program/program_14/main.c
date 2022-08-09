#include <stdio.h>
#include <math.h>

int main() {
    double x, y, new_y = 1.0;
    
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        y = new_y;
        new_y = (y + x / y) / 2.0;
    } while(fabs(y - new_y) > 0.00001 * y);

    printf("Square root: %f\n", new_y);

    return 0;
}
