//
//  main.c
//  exercise_02
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x = 3.1415926;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);
    
    return 0;
}
