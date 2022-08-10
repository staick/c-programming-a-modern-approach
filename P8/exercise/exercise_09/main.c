#include <stdio.h>

int main() {
    int temperature_readings[30][24] = {0};
    double average = 0;

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            average += temperature_readings[i][j];
        }
    }

    average /= 30 * 24;
    printf("The average of temperature is: %f\n", average);

    return 0;
}
