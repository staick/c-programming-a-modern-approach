#include <stdio.h>
#include <string.h>

#define MAX_SIZE 80

int main() {
    char message[MAX_SIZE];
    int shift, size = 0;

    printf("Enter message to be encrypted: ");
    while ((message[size++] = getchar()) != '\n')
        ;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (int i = 0; i < strlen(message); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + shift) % 26 + 'A';
        }
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' + shift) % 26 + 'a';
        }
    }

    printf("Encrypted message: ");
    for (int i = 0; i < strlen(message); i++) {
        putchar(message[i]);
    }
    putchar('\n');

    return 0;
}