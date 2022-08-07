#include <stdio.h>

#define abs(x) ((x) > 0 ? (x) : -(x))

int main() {
    int hour, minute, time, min, flag;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    time = hour * 60 + minute;
    
    min = abs(time - 480);
    flag = 1;

    if (abs(time - 573) < min) {
        min = abs(time - 573);
        flag = 2;
    }
    if (abs(time - 679) < min) {
        min = abs(time - 679);
        flag = 3;
    }
    if (abs(time - 767) < min) {
        min = abs(time - 767);
        flag = 4;
    }
    if (abs(time - 840) < min) {
        min = abs(time - 840);
        flag = 5;
    }
    if (abs(time - 945) < min) {
        min = abs(time - 945);
        flag = 6;
    }
    if (abs(time - 1140) < min) {
        min = abs(time - 1140);
        flag = 7;
    }
    if (abs(time - 1305) < min) {
        min = abs(time - 1305);
        flag = 8;
    }

    switch (flag) {
        case 1: printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");    break;
        case 2: printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");    break;
        case 3: printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");    break;
        case 4: printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");    break;
        case 5: printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");     break;
        case 6: printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");     break;
        case 7: printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");     break;
        case 8: printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");    break;    
    }

    return 0;
}

