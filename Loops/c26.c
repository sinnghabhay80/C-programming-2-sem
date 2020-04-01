
/*#26.	Write a program to print the prime numbers in a range. */
#include<stdio.h>
void main()
{
   int i,ul=0,ll=0,num=0,a;
   printf("\n Enter the Lower Limit:");
   scanf("%d",&ll);
   printf("\n Enter the Upper Limit:");
   scanf("%d",&ul);
   printf("\n Prime Numbers in the given Range are:");
   for(num=ll;num<=ul;num++)
   {   a=0;
       for(i=2;i<=num/2;i++)
       if(num%i==0)
    {
        a=1;
    }
    if(a==0)
        printf(" %d",num);
   }
     getchar();
}
