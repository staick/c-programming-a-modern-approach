#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 50

int main() {
    int i = 0;
    char ch[CHAR_SIZE] = {0};

    printf("Enter message: ");
    while ((ch[i] = getchar()) != '\n')
        i++;
    for (int i = 0; i < strlen(ch); i++) {
        ch[i] = toupper(ch[i]);
        switch (ch[i]) {
            case 'A':
                ch[i] = '4';
                break;
            case 'B':
                ch[i] = '8';
                break;
            case 'E':
                ch[i] = '3';
                break;
            case 'I':
                ch[i] = '1';
                break;
            case 'O':
                ch[i] = '0';
                break;
            case 'S':
                ch[i] = '5';
                break;
        }
    }

    for (int j = 0; j < 10; j++) {
        ch[i + j] = '!';
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < strlen(ch); i++) {
        putchar(ch[i]);
    }
    printf("\n");

    return 0;
}