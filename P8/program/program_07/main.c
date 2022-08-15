#include <stdio.h>

int main() {
    int array[5][5], row_totals[5] = {0}, column_totals[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        // scanf("%d%d%d%d%d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                row_totals[i] += array[i][j];
            }
        }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            column_totals[j] += array[i][j];
        }
    }

    printf("Row totals:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", row_totals[i]);
    }
    printf("\nColumn totals:");
    for (int j = 0; j < 5; j++) {
        printf(" %d", column_totals[j]);
    }
    printf("\n");

    return 0;
}