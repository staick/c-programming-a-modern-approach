#include <stdio.h>

int main() {
    int hour, minute;
    char sign;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &sign);
    getchar();
    
    if (sign == 'p' || sign == 'P' && hour != 12) {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %d:%.2d\n", hour, minute);

    return 0;
}
