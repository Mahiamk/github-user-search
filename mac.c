#include <stdio.h>

int main() {
    int num;

    printf("Hello user, Enter a number: ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("UNITED STATES");
            break;
        case 2:
            printf("SPAIN");
            break;
        case 3:
            printf("INDIA");
            break;
        default:
            printf("WRONG ENTRY");
    }
}
