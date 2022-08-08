#include <stdio.h>

int main() {
    int year, month, day, early_year, early_month, early_day;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    early_year = year;
    early_month = month;
    early_day = day;

    while(year || month || day) {
        if (year < early_year) {
            early_year = year;
            early_month = month;
            early_day = day;
        } else if (year == early_year) {
            if (month < early_month) {
                early_month = month;
                early_day = day;
            } else if (month == early_month) {
                if (day < early_day) {
                    early_day = day;
                }
            }
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
    }

    printf("%d/%d/%.2d is the earliest date\n", early_month, early_day, early_year);
    
    return 0;
}
