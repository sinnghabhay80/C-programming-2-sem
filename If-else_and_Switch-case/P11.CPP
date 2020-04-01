/*#11.	Write a C program to check whether a character is uppercase or lowercase alphabet.*/
#include<stdio.h>

void main()
{

 char a;
 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   if(a>=97 && a<=122)
     {
      printf("\nEntered character is in lower case");
     }
   else
     {
      printf("\nEntered character is in lower case");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet.");
  }
 getchar();
}
