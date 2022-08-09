#include <stdio.h>

int main() {
    char c;
    int length = 0, count = 0, total = 0;
    float average;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n') {
        if (c == ' ') {
            count++;
            total += length;
            length = 0;
            continue;
        }
        length++;
    }
    total += length;
    average = (float)total / (count + 1);

    printf("Average word length: %.1f\n", average);

    return 0;
}
