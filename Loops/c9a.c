/*9. Write a complete  C program for each of the problems presented below. Use whatever control structures are most appropriate for each problem :
a. Calculate the cumulative product of a list of n numbers. Test your program with the following six data               items: 6.2, 12.3, 5.0, 18.8, 7.1, 12.8. */
#include<stdio.h>
void main()
{
 int n,i=0;float num,pr=1;
 printf("\n Enter hoe many numners you want:");
 scanf("%d",&n);
 printf("\n Enter the numbners one by one:");
 while(i<n)
{
 scanf("%f",&num);
 pr*=num;
 i++;
 }
 printf("\n The product of entered numbers is:%f",pr);
 getchar();
 }
