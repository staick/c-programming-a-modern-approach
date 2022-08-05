//
//  main.c
//  program_04
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int first, second, third;
    
    printf("Enter phone number [(xxx) xxx-xxxx]:" );
    scanf("(%d) %d-%d", &first, &second, &third);
    
    printf("You entered %d.%d.%d\n", first, second, third);
    
    return 0;
}
