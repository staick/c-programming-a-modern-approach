//
//  main.c
//  program_07
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int money, twenty, ten, five, one;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &money);
    
    twenty = money / 20;
    money %= 20;
    ten = money / 10;
    money %= 10;
    five = money / 5;
    money %= 5;
    one = money;
    
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
    
    return 0;
}
