/*15.	Write a C program to check whether a number is a power of 2 or not*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,a=0;
    printf("\n Enter a number to check whether it is a power of 2 or not:");
    scanf("%d",&n);
    for( ;i<=(n/2);i++)
    {
        if(pow(2,i)==n)
        {
            a=1;break;
        }
    }
    if(a==1)
   {

    printf("\n %d is a power of 2.",n);
   }
    else
    {
            printf("\n %d is not a power of 2.",n);
    }
    getchar();
}
