#include <stdio.h>
#include <ctype.h>

int main() {
    int count = 0;
    char c;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n') {
        c = tolower(c);
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                count++;
        }
    }

    printf("Your sentence contains %d vowels.\n", count);

    return 0;
}
