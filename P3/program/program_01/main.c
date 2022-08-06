//
//  main.c
//  program_01
//
//  Created by staick on 2022/8/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year, month, day;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date %d%02d%d\n", year, month, day);
    
    return 0;
}
