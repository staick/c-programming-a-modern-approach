#include <stdio.h>

int main() {
    int speed;

    printf("Enter the wind speed: ");
    scanf("%d", &speed);

    if (speed < 1) {
        printf("It is Calm.\n");
    } else if (speed <= 3) {
        printf("It is Light air.\n");
    } else if (speed <= 27) {
        printf("It is Breeze.\n");
    } else if (speed <= 47) {
        printf("It is Gale.\n");
    } else if (speed <= 63) {
        printf("It is Storm.\n");
    } else {
        printf("It is Hurricane.\n");
    }

    return 0;
}
