#include <stdio.h>

int main() {
    int number;
    float price, value, commission, commission_rival;

    printf("Enter the number and price: ");
    scanf("%d %f", &number,  &price);
    value = price * number;

    if (value < 2500.00f) {
        commission = value * 0.017f + 30.00f;
    } else if (value < 6250.00f) {
        commission = value * 0.0066f + 56.00f;
    } else if (value < 20000.00f) {
        commission = value * 0.0034f + 76.00f;
    } else if (value < 50000.00f) {
        commission = value * 0.0022f + 100.00f;
    } else if (value < 500000.00f) {
        commission = value * 0.0011f + 155.00f;
    } else {
        commission = value * 0.0009f + 255.00f;
    }

    if (number < 2000) {
        commission_rival = number * 0.03f + 33.00f;        
    } else {
        commission_rival = number * 0.02f + 33.00f;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);
    printf("The Commission of rival: $%.2f\n", commission_rival);

    return 0;
}
