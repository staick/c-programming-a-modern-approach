//
//  main.c
//  program_04
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float money, total;
    
    printf("Enter an amount: ");
    scanf("%f", &money);
    
    total = money * 1.05;
    
    printf("With tax added: $%.2f\n", total);
    
    return 0;
}
