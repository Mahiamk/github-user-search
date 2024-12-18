#include <stdio.h>

void main() {
    int num;
        /*
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", num);
    if (num>0)
        printf("\nThe enterd number is positive");
    if (num<0)
        printf("\nThe enterd number is negative");
    else
        printf("\nThe enterd number is zero");
    return 0;
    
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    if(mark>100)
        printf("Your mark is above the limit, please check");
    else if(mark>80)
        printf("Your grade is A");
    else if((mark>76)&&(mark<80))
    {
        printf("Your grade is B");
        printf("\nGreat");
    }
    else if((mark>65)&&(mark<76))
        printf("Your grade is C");
    if((mark>52)&&(mark<65))
        printf("Your grade is D");
    if(num>80)
        printf("Your grade is D")
        */
    printf("Hello user, Enter a number: ");
    scanf("%d", &num);
    switch(num){
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
        printf("WRONG ENTERY");
    }

}

