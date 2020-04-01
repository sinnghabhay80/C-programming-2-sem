/*#5. Program to check for Krishnamurthy number by user defined function.*/
#include<stdio.h>
int iskm(int n)
{
      int s=0,d,i=1,f=1,t;

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
    else printf("\n  The number %d is not Krishnamurthy Number.",t);
}
void main()
{
    int n;
    printf("\n Enter a Number to check for being Krishnamurthy number:");
    scanf("%d",&n);
    iskm(n);
}
