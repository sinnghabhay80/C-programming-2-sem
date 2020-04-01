/*#28. Write a program to add the prime numbers of a certain range given by the user. */
#include<stdio.h>
void main()
{
   int i,ul=0,ll=0,num=0,a,sum=0;
   printf("\n Enter the Lower Limit:");
   scanf("%d",&ll);
   printf("\n Enter the Upper Limit:");
   scanf("%d",&ul);
   for(num=ll;num<=ul;num++)
   {   a=0;
       for(i=2;i<=num/2;i++)
       if(num%i==0)
    {
        a=1;
    }
    if(a==0)
        sum+=num;
   }
   printf("\n The Sum Obtained: %d.",sum);
     getchar();
}
