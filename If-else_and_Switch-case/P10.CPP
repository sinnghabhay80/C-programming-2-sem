/*#10.	Write a C program to input any character and check whether it is alphabet, digit or special character*/
#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   printf("\nEntered character is an alphabet ");
  }
 else if(a>=48 && a<=57)
  {
   printf("\nEntered character is a digit");
  }
 else
  {
   printf("\nEntered character is a special character ");
  }
getchar();
}
