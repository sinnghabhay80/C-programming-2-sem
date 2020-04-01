/*#25. Write a program to print the second largest number among a list of numbers without using array. */
#include<stdio.h>
void main()
{
    int n,i,num,sl,l;
    num=0;sl=0;l=0;
    printf("\n How many Number you want to check for second largest one:");
    scanf("%d",&n);
    printf("\n Enter %d Numbers:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(i==1) l=sl=num;
        else if(l<num)
        {
            sl=l;
            l=num;
        }
        else if(l>num && num>sl) sl=num;
    }
    printf("\n The second largest number is %d.",sl);
    getchar();
}
