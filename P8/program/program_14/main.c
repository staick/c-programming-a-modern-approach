#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE 100
#define MAX_WORD 20

int main() {
    char sentence[MAX_SENTENCE] = {0};
    char word[MAX_WORD] = {0};
    char end;
    int num = 0, w_num = 0;

    printf("Enter a sentence: ");
    while ((sentence[num] = getchar()) != '\n') {
        if (sentence[num] == '.' || sentence[num] == '!' ||
            sentence[num] == '?') {
            end = sentence[num];
            sentence[num] = '\0';
            break;
        }
        num++;
    }

    printf("Reversal of sentence: ");
    for (num = strlen(sentence) - 1; num >= 0; num--) {
        if (sentence[num] == ' ') {
            for (int i = strlen(word) - 1; i >= 0; i--){
                putchar(word[i]);
                word[i] = '\0';
            }
            putchar(' ');
            w_num = 0;
            continue;
        }
        word[w_num++] = sentence[num];
    }

    for (int i = strlen(word) - 1; i >= 0; i--){
        putchar(word[i]);
    } 

    printf("%c\n", end);
}