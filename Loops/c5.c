/*5. Write a loop that will calculate the sum of every third integer, beginning with i=2 (icy calculate the sum 2 + 5 + 8 + 11 + - ) for all values of i that are less than 100. Write the loop three different ways.
                (a) Using a while statement.                 (b) Using a do - while statement.   (c) Using a f o r statement. */
#include<stdio.h>
void main()
{
    int i=2,sum=0;
    //while
    printf("\n The sum of every third integer is(starting for 2)(while loop):");
    while(i<100)
    {
        sum+=i;
        i+=3;
    }
    printf("%d",sum);
    i=2;sum=0;
    //for loop
    printf("\n The sum of every third integer is(starting for 2)(for loop):");
    for(;i<100;i+=3)
    {
        sum+=i;
    }
    printf("%d",sum);
    i=2;sum=0;
    //do while
    printf("\n The sum of every third integer is(starting for 2)(do while loop):");
    do
    {
        sum+=i;
        i+=3;
    }while(i<100);
    printf("%d",sum);
    getchar();
}
