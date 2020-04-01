/*14.	Write a C program to find the prime factors of a number given by the user*/

#include<stdio.h>
void main()
{
    int n,i=2,a=2,b=1;
    printf("\n Enter a Number to get its prime factors:");
    scanf("%d",&n);
    printf("\n The Prime Factors of %d are:",n);
    for( ; i<=(n/2);i++)
    {
       if(n%i==0)
       {
         for( ; a<=(i/2);a++)
         {
             if(i%a==0)
             {
               b=0;
               break;
             }
            }
            if(b=1)
            {
                printf("%d,",i);
            }
       }
    }
    getchar();
}
