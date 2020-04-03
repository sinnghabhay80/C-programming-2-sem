/*#11. Program to print the Sum of the digits of a given number and then reverse the number using functions . */
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
int reverse(int x)
{
    int i,r=0;
     for(i=1;x>0;i++)
  {
      r=(r*10)+(x%10);
      x/=10;
  }
  return(r);

}
void main()
{
  int x,y,r;
  printf("\n Enter any number to get the sum of digits:");
  scanf("%d",&x);
  y=sod(x);
  r=reverse(x);
  printf("\n Sum of Digits of %d is %d.",x,y);
  printf("\n Reverse of %d is %d.",x,r);
 }
