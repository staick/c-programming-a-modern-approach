#include <stdio.h>

int main() {
    int area_code;

    printf("Enter the area code: ");
    scanf("%d", &area_code);

    switch(area_code) {
        case 229: 
            printf("Albany");   break;
        case 404: case 470: case 678: case 770:
            printf("Atlanta");  break;
        case 478:
            printf("Macon");    break;
        case 706: case 762:
            printf("Columbus"); break;
        case 912:
            printf("Savannah"); break;
        default:
            printf("Area code not recognize");
    }

    printf("\n");

    return 0;
}
