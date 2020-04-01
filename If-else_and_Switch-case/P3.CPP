/*#3.	Write a C program to find maximum between three numbers*/
#include<stdio.h>

int main()
{
 int a,b;

 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);
 if(a>b)
  {
   printf("\nEnter a number  :");
   scanf("%d",&b);
   if(a>b)
     {
      printf("\nGreatest number is :%d",a);
     }
   else
     {
      printf("\nGreatest number is :%d",b);
     }
  }
 else
  {
   printf("\nEnter a number  :");
   scanf("%d",&a);
   if(a>b)
     {
      printf("\nGreatest number is :%d",a);
     }
   else
     {
      printf("\nGreatest number is :%d",b);
     }
  }
 getchar();
return(0);
}
