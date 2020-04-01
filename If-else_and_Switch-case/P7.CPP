/*#7.	Write a C program to check whether a year is leap year or not.*/
#include<stdio.h>

void main()
{
 int a;

 printf("\nEnter a year  :");
 scanf("%d",&a);
 if(a%4==0)
  {
   printf("\nEntered year is a leap year");
  }
 else
  {
    printf("\nEntered year is not a leap year");
  }
 getchar();
}
