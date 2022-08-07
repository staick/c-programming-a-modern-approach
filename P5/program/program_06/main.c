#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, first_sum, second_sum, total;
    printf("Enter the upc: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2 ,&n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6  + n8 + n10;
    total = 9 - (first_sum * 3 + second_sum - 1) % 10;

    if (total == n12) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}
