#include <stdio.h>

int main() {
    int day, week;
    
    printf("Enter number of days in month: ");
    scanf("%d", &day);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week);

    for (int i = 1; i < week; i++) {
        printf("   ");
    }

    for (int i = 1; i <= day; i++) {
        printf("%2d ", i);
        if ((week + i) % 7 == 1) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
