//
//  main.c
//  program_05
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main()
{
    int x, result;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    result = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    printf("The result of the polynomial is: %d\n", result);
    
    return 0;
}
