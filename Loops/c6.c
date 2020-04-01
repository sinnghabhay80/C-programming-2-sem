/*6. Repeat Prob. 5 calculating the sum of every nth integer, beginning with the value assigned to nstart
(i.e., for i= n s t a r t , nstart + n, nstart + 2*n, nstart + 3*n, etc.). Continue the looping process for all values of i that do not exceed nstop. */
#include<stdio.h>
void main()
{
    int nstart,nstop,n,sum=0,i=0;
    printf("\n Enter the desired starting point:");
    scanf("%d",&nstart);
    i=nstart;
    printf("\n Enter the desired ending point:");
    scanf("%d",&nstop);
    printf("\n Enter the desired gapping:");
    scanf("%d",&n);
    //while
     while(i<nstop)
    {
        sum+=i;
        i+=n;
    }
    printf("\nThe sum obtained is:%d",sum);

    sum=0;i=nstart;
    //for loop
    for(;i<nstop;i+=n)
    {
        sum+=i;
    }
    printf("\nThe sum obtained is:%d",sum);

    sum=0;i=nstart;
    //do while
    do
    {
        sum+=i;
        i+=n;
    }while(i<nstop);
    printf("\nThe sum obtained is:%d",sum);
    getchar();
}
