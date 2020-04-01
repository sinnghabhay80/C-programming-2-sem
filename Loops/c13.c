/*13.	Write a C program to convert the binary equivalent of an integer number without using an array*/

#include<stdio.h>
#include<math.h>
void main()
{
 int b,d=0,r=0,i=0;
 printf("\n Enter the Binary Number:");
 scanf("%d",&b);
 while(b!=0)
 {
     r=(b%10);
     b/=10;
     d+=(r*pow(2,i));
     i++;
 }
 printf("\n The Converted Number is:%d",d);
 getchar();
 }
