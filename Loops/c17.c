/*17.	Write a program to find the sum of digits of a number given by the user*/
#include<stdio.h>
void main()
{
    int d,n,t,s=0;
    printf("\n Enter a Number to get the sum of digits:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        s+=d;
        n/=10;
    }
    printf("\n The sum of digits of number %d is:%d",t,s);
    getchar();
}
