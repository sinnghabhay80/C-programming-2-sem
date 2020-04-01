/*#13.	Write a C program to input month number and print number of days in that month.*/
#include<stdio.h>

void main()
{
 char a;

 printf("\nEnter an character :");
 scanf("%c",&a);
 switch(a)
  {
   case '1' : printf("\nJanuary");
	      break;
   case '2' : printf("\nFebruary");
	      break;
   case '3' : printf("\nMarch");
	      break;
   case '4' : printf("\nApril");
	      break;
   case '5' : printf("\nMay");
	      break;
   case '6' : printf("\nJune");
	      break;
   case '7' : printf("\nJuly");
	      break;
   case '8' : printf("\nAugust");
	      break;
   case '9' : printf("\nSeptember");
	      break;
   case '10' : printf("\nOctober");
	      break;
   case '11' : printf("\nNovember");
	      break;
   case '12' : printf("\nDecember");
   default  : break;
  }
 getchar();
}
