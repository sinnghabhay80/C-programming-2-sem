/*#15.	Write a C program to input angles of a triangle and check whether triangle is valid or not.*/
#include<stdio.h>

void main()
{
 int a,b,c;

 printf("\nEnter 3 angles of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 if ((a+b+c)==180 )
   {
    printf("\nTriangle is valid");
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getchar();
}
