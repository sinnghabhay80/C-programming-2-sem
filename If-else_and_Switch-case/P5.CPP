/*#5.	Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include<stdio.h>

int main()
{
 int a;

 printf("\nEnter number  :");
 scanf("%d",&a);
 if(a%5==0 && a%11==0)
  {
   printf("\nEntered number is valid");
  }
 else
  {
    printf("\nEntered number is not valid");
  }
 getchar();
 return(0);
}
