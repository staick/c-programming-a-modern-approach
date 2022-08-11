#include <stdio.h>
#include <stdbool.h>

int main() {
    int digit; 
    bool digit_seen[10] = {false};
    long n;

    for (;;) {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n <= 0) {
            break;
        }
        while(n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0) {
            printf("Repeated digit\n");
        } else {
            printf("No repeated digit\n");
        }
    }



    return 0;
}
