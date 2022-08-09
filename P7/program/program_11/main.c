#include <stdio.h>

int main() {
    char c, first_name;

    printf("Enter a first and last name: ");

    scanf(" %c", &first_name);
    while(getchar() != ' ')
        ;

    while((c = getchar()) != '\n') {
        if (c != ' ') {
            putchar(c);
        }
    }

    printf(", %c.\n", first_name);

    return 0;
}
