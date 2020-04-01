/*11. Write an interactive program that will read in a positive integer value and determine the following:       (i) If the integer is a prime number.       (ii) If the integer is a Fibonacci number.      Write the program in such a manner that it will execute repeatedly, until a zero value is detected for   the input quantity. Test the program with several integer values of your choice. */

#include<stdio.h>
void main()
{
    int n,n1=0,n2=1,temp,i=2,a;
    printf("\n Enter the number you want to check for being fibonacci or prime:");
    scanf("%d",&n);
    while(n2<=n)
    {
        temp=n2;
        n2+=n1;
        n1=temp;
        if(n2==n)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("\n %d is : Fibonacci.",n);
    }
    else
    {
        printf("\n %d is : Not Fibonacci.",n);
    }
     for( ;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
     if(a==1)
    {
        printf("\n %d is: Prime.",n);
    }
    else
    {
        printf("\n %d is: Not Prime.",n);
    }
     getchar();
}

