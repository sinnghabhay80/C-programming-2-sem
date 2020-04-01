  /*21. Write a C program to print the following series: 0 1 1 2 3 5 8 13 .... The number of terms to be printed should be given by the user.
*/

#include<stdio.h>
void main()
{
    int n1=0,n2=1,n,i=1,temp;
    printf("\n Enter how many terms you want of the fibonacci series:");
    scanf("%d",&n);
    printf("\n The fibonacci series is:%d %d",n1,n2);
    while(i<=(n-2))
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        printf(" %d",temp);
        i++;
    }
    getchar();
}
