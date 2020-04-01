/*24.	Write a program to check whether a number is a Krishnamurty number or not. A Krishnamurty number is one whose sum of factorial of digits equals the number*/
#include<stdio.h>
void main()
{
    int n,s=0,d,i=1,f=1,t;
    printf("\n Enter a number to check if its Krishnamurthy or not:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        f=1;
        d=n%10;
        for(i=1 ;i<=d;i++)
            f=f*i;
        s+=f;
        n/=10;
    }
    if(t==s)
         printf("\n The number %d is Krishnamurthy Number.",t);

    getchar();
}
