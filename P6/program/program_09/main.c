#include <stdio.h>

int main() {
    float loan, rate, payment;
    int times;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter the times: ");
    scanf("%d", &times);

    while(times) {
        loan = loan + loan * rate / 100 / 12 - payment;
        printf("Balance remaining after first payment: $%.2f\n", loan);
        times--;
    }

    return 0;
}
