/*#19.	Write a C program to calculate profit or loss.*/

#include<stdio.h>

void main()

{

 float i,f,p,l;

 printf("Enter the initial capital:");

 scanf("%f",&i);

 printf("\n Enter the final capital:");

 scanf("%f",&f);

 if(i<f)

 {

 printf("\n Profit:");

  p=(f-i);

  printf("%f",p);

 }

 else if(i==f)

 printf("\n No Profit,No Loss.");

 else

 {

   printf("\n Loss:");

   l=(i-f);

   printf("%f",l);

   }


 getchar();
}
