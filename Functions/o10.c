/*#10. Write a C program to check whether a number is even or odd using functions.*/
#include<stdio.h>
void evenorodd(int n)
{
    if(n%2==0)
        printf("\n Given Number %d is Even.",n);
    else
        printf("\n Given Number %d is Odd.",n);
}
void main()
{
    int n;
    printf("\n Enter a Number to check whether it is Even or Odd:");
    scanf("%d",&n);
    evenorodd(n);
}
