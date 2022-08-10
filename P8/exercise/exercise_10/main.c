#include <stdio.h>

int main() {
    char chess_board[8][8] = {
        'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
        'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
        ' ', '.', ' ', '.', ' ', '.', ' ', '.',
        '.', ' ', '.', ' ', '.', ' ', ' ', '.',
        ' ', '.', ' ', '.', ' ', '.', ' ', '.',
        '.', ' ', '.', ' ', '.', ' ', ' ', '.',
        'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
        'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            putchar(chess_board[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
