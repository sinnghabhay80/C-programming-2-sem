/*#6.	Write a C program to check whether a number is even or odd */
#include<stdio.h>

void main()
{
 int a;

 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a%2==0)
  {
   printf("\nEntered number even");
  }
 else
  {
    printf("\nEntered number odd");
  }
 getchar();
}
