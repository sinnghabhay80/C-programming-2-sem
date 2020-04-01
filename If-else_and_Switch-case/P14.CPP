/*#14.	Write a C program to count total number of notes in given amount.*/
#include<stdio.h>

void main()
{
long n,th,fh,h,f,tw,t,fc,tc,oc;

 printf("Enter an amount  :");
 scanf("%d",&n);
 th=n/2000;
 n=n%2000;
 fh=n/500;
 n=n%500;
 h=n/100;
 n=n%100;
 f=n/50;
 n=n%50;
 tw=n/20;
 n=n%20;
 t=n/10;
 n=n%10;
 fc=n/5;
 n=n%5;
 tc=n/2;
 n=n%2;
 oc=n/1;
 printf("\n2000 rupees notes are  :%d",th);
 printf("\n 500 rupees notes are  :%d",fh);
 printf("\n 100 rupees notes are  :%d",h);
 printf("\n  50 rupees notes are  :%d",f);
 printf("\n  20 rupees notes are  :%d",tw);
 printf("\n  10 rupees notes are  :%d",t);
 printf("\n   5 rupees coin  are  :%d",fc);
 printf("\n   2 rupees coin  are  :%d",tc);
 printf("\n   1 rupee  coin  are  :%d",oc);
 getchar();
}

