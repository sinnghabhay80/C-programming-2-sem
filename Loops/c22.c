/*22.	Write a C program to print the numbers that do not appear in the Fibonacci series. The number of such terms to be printed should be given by the user.*/
#include<stdio.h>
void main()
{
 int n,a,b,c,d,i,j;
 a=0;
 b=1;
 c=0;
 i=1;
 j=0;
 printf("Enter the number of terms you want in non-fibonacci series series:");
 scanf("%d",&n);
 while(i<=n)
 {
  c=a+b;
  a=b;
  b=c;
  d=a+b;
  for(j=c+1;j<d;j++) //to find the non fibonacci numbers between 2 fibonacci numbers
  {
      if(i<=n)
      {
          printf(" %d",j);
          i++;
      }
  }
 }
 getchar();
}
