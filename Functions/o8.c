/*#8. Write a function that will allow a floating-point number to be raised to an integer power. In other words, we wish
     to evaluate the formula y= xn  where y and x are floating-point variables and n is an integer variable. And then Swap the values
     of x and y.  */


#include<stdio.h>
#include<math.h>
float cal(float x,int n)
{   int i;float a;
    a=x;
    for(i=2;i<=n;i++)
    {
        x*=a;
    }
    return(x);
}
void swap(float* x,float* y)
{
    float t;
    t=*x;*x=*y;*y=t;
}
void main()
{
    float x,y;int n;
    printf("\n Enter the value of x:");
    scanf("%f",&x);
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    y=cal(x,n);
    printf("\n Value of y: %f",y);
    printf("\n Current Values of x:%f and y:%f",x,y);
    swap(&x,&y);
    printf("\n New Swapped Values of x:%f and y:%f",x,y);
}
