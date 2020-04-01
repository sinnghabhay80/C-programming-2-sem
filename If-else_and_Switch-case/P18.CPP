/*#18.	Write a C program to find all roots of a quadratic equation.*/
#include<stdio.h>

void main()
{
 int a,b,c;

 printf("\nEnter coefficient of X^2  :");
 scanf("%d",&a);
 printf("\nEnter coefficient of X  :");
 scanf("%d",&b);
 printf("\nEnter the constant :");
 scanf("%d",&c);
  printf("\n1st root is  :%f",(-b+sqrt((b*b)-(4*a*c)))/2*a);
  printf("\n2nd root is  :%f",(-b-sqrt((b*b)-(4*a*c)))/2*a);

  getchar();
}
