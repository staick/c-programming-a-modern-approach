//
//  main.c
//  program_08
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float loan, rate, payment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    loan = loan + loan * rate / 100 / 12 - payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = loan + loan * rate / 100 / 12 - payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan = loan + loan * rate / 100 / 12 - payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);
}
