/*3. Use a while statement to calculate the average of a list of n numbers(while, do-while, for loop) */
#include<stdio.h>
void main()
{
    int num,n,i=0,sum=0;float av;
    printf("\n Enter how many numbers you want to enter to get the average:");
    scanf("%d",&n);
    printf("\n Enter the Numbers one by one:");
    //while loop
    while(i<n)
    {
        scanf("%d",&num);
        sum+=num;
        i++;
    }
    av=sum/n;
    printf("\n The Average of Entered numbers is: %f",av);
    //do while loop
    i=0;sum=0;num=0;
    printf("\n Enter the Numbers one by one:");
    do
    {
       scanf("%d",&num);
        sum+=num;
        i++ ;
    }while(i<n);
     av=sum/n;
    printf("\n The Average of Entered numbers is: %f",av);
    //or loop
    i=0;sum=0;num=0;
    printf("\n Enter the Numbers one by one:");
    for(;i<n;i++)
    {
         scanf("%d",&num);
        sum+=num;

    }
       av=sum/n;
    printf("\n The Average of Entered numbers is: %f",av);
    getchar();
}

