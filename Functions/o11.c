/*#11. Program to print the Sum of the digits of a given number using functions. */
#include<stdio.h>
int sod(int x)
{
  int i,y;
  for(i=1;x>0;i++)
  {
      y+=(x%10);
      x/=10;
  }
  return(y);
}
void main()
{
  int x,y;
  printf("\n Enter any number to get the sum of digits:");
  scanf("%d",&x);
  y=sod(x);
  printf("\n Sum of Digits of %d is %d.",x,y);
 }
