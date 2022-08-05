//
//  main.c
//  program_06
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, result;
    
    printf("Enter a number：");
    scanf("%d", &x);
    result = ((((3*x+2)*x-5)*x-1)*x+7)-6;
    
    printf("The result of the polynomial：%d\n", result);
    
    return 0;
}
