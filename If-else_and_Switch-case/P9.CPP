/*#9.	Write a C program to input any alphabet and check whether it is vowel or consonant.*/
#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
   if( a==97 || a==65 ||
       a==101 || a==69||
       a==105 || a==73 ||
       a==111 || a==79 ||
       a==117 || a==85)
     {
      printf("\nEntered character is a vowel");
     }

   else
     {
      printf("\nEntered character is an consonant");
     }
  }
 else
  {
   printf("\nEntered character is not an alphabet even");
  }
 getchar();
}
