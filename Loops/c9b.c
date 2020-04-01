/*  b. The Fibonacci numbers are members of an interesting sequence in which each number is      equal to the sum of the previous two numbers. In other words,                             Fi = Fi-1 + Fi-2             where Fi refers to the ith Fibonacci number. By definition, the first two Fibonacci numbers  equal  1; i.e.,               F i = F 2 = 1 .
   Hence,             F3 = F2 + F1 = 1 + 1 = 2            F4 = F3 + F2 = 2 + 1 = 3           Fs = F4 + F3 =3 + 2= 5         and so on.
    Write a program that will determine the first n Fibonacci numbers. Test the   program   with n = 7, n =10,n= 17and n=23. */
#include<stdio.h>
void main()
{
 int i=0,n,f1=1,f2=1,fn;
 printf("\n Enter how many fibonacci numbers you want to see:");
 scanf("%d",&n);
 printf("\n THE required fibonacci series is:");
 printf("%d %d",f1,f2);
 while((i+2)<n)
{
 fn=(f1+f2);
 printf(" %d ",fn);
 f1=f2;
 f2=fn;
 i++;
}
getchar();
}

