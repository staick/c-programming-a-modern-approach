//
//  main.c
//  program_02
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int item, month, day, year;
    float price;
    
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\tUnit\t\tPurchase\n");
    printf("    \tPrice\t\tDate\n");
    printf("%-4d\t$%7.2f\t%d/%02d/%d\n", item, price, month, day, year);
    
    return 0;
}
