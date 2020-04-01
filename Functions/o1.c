/*#1 Program for Adding numbers and for checking the Larger one.*/

#include<stdio.h>
int addnum(int,int);
int pmax(int,int);
void main()
{
    int a,b;
    printf("\n Enter 2 numbers to Get the Sum and the Larger one:");
    scanf("%d %d",&a,&b);
    printf("\n Sum:");
    addnum(a,b);
    printf("\n Max:");
    pmax(a,b);
    }
 int addnum(int a,int b)
 {
     printf("\n %d",a+b);
     return(0);
 }
int pmax(int a,int b)
{
    if(a>b)printf("%d",a);
    else if(a==b)printf("\n Both are Equal.");
    else printf("%d",b);
}
