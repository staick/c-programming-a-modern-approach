#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROW 10
#define NUM_COL 10

int main() {
    char map[10][10];
    char step = 'A';
    int direction, row, col;
    bool flag = true;

    // 将地图上的所有位置初始化为'.'
    for (row = 0; row < NUM_ROW; row++) {
        for (col = 0; col < NUM_COL; col++) {
            map[row][col] = '.';
        }
    }

    // 设置随机数种子
    srand((unsigned)time(NULL));

    // 初始位置为(0,0)，字符为'A'
    row = 0;
    col = 0;
    map[0][0] = 'A';

    while (flag) {
        // 判断是否被堵住，堵住则退出循环
        if (map[row - 1][col] != '.' && map[row + 1][col] != '.' &&
            map[row][col - 1] != '.' && map[row][col + 1] != '.') {
            flag = false;
        }

        // 使用随机数随机生成方向 0(上) 1(下) 2(左) 3(右)
        direction = rand() % 4;

        switch (direction) {
            case 0:
                row--;
                if (row < 0) {
                    row++;
                    continue;
                } else if (map[row][col] != '.') {
                    row++;
                    continue;
                } else {
                    map[row][col] = ++step;
                }
                break;
            case 1:
                row++;
                if (row >= NUM_ROW) {
                    row--;
                    continue;
                } else if (map[row][col] != '.') {
                    row--;
                    continue;
                } else {
                    map[row][col] = ++step;
                }
                break;
            case 2:
                col--;
                if (col < 0) {
                    col++;
                    continue;
                } else if (map[row][col] != '.') {
                    col++;
                    continue;
                } else {
                    map[row][col] = ++step;
                }
                break;
            case 3:
                col++;
                if (col >= NUM_COL) {
                    col--;
                    continue;
                } else if (map[row][col] != '.') {
                    col--;
                    continue;
                } else {
                    map[row][col] = ++step;
                }
                break;
        }

        // 判断字母是否用完，用完退出循环
        if (step >= 'Z') {
            flag = false;
        }
    }

    for (row = 0; row < NUM_ROW; row++) {
        for (col = 0; col < NUM_COL; col++) {
            printf("%c", map[row][col]);
        }
        printf("\n");
    }
    return 0;
}