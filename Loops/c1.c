/*1. Suppose status is a char-type variable and balance is a floating-point variable. We wish to assign the character C (current) to status if
balance has a value of zero, and 0 (overdue) if balance has a value that is greater than zero. (using conditional operator)*/
#include<stdio.h>

void main()
{


    char status;
    float balance;
    printf("\n Enter value of Balance:");
    scanf("%f",&balance);
    balance=(balance>0)?balance:(-1*balance);
    printf("\n The status is: %c",status);
    (balance>0)?(status='O'):(status='C');
    printf("%c",status);
    getchar();
}
