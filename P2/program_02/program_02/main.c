//
//  main.c
//  program_02
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

#define PI 3.14

int main(int argc, const char * argv[])
{
    float r = 10;
    float v = 4.0f / 3.0f * PI * r * r * r;
    printf("球体的体积为%f\n", v);
    
    return 0;
}
