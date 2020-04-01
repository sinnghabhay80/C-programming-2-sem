/*#17.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.*/

#include<stdio.h>

void main()
{
 int a,b,c,a1,b1,c1;

 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);

 if ( (a+b>c) && (a+c>b) && (c+b>a) )
   {
    if(a==b && b==c && a==c)
      {
       printf("\nTringle formed is an Equilateral triangle");
      }
    else if(a==b && b!=c)
      {
       printf("\nTrinangle in Isoceles triangle");
      }
    else if(a!=b && b!=c && a!=c)
    {
        printf("\n Triangle is Scalene triangle.");
    }
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getchar();
}
