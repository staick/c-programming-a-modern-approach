//
//  main.c
//  program_03
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

#define PI 3.14

int main(int argc, const char * argv[])
{
    float r;
    float v;
    
    printf("请输入球的半径：");
    scanf("%f", &r);
    v = 4.0f / 3.0f * PI * r * r * r;
    
    printf("球体的体积为%f\n", v);
    
    return 0;
}
