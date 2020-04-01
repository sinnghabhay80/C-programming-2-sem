/*#2 Program for checking the Entered chaeracter is Digit or Not.*/
#include<stdio.h>
int isdigit(char ch)
{
 return(ch>='0' && ch<='9');

 }
int main()
{
 char ch;
  printf("\n Enter a single value:");
  scanf("%c",&ch);
  if(isdigit(ch))
   printf("\n The value is a Digit!!");
  else printf("\n The value is Not a Digit!!");
   return(0);
    }
