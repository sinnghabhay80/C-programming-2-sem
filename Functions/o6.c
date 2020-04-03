/*#6. Program to call functions formula(to calculate value for an predefined expression) and display(valve of a and b to get the Square root of the added value of their square).  */
#include<stdio.h>
#include<math.h>
float formula(float x)
{
    float y;
    y= ((3*x)-1);
    return(y);
}
void display(int a,int b)
{
    int c;
    c= sqrt(a*a+b*b);
    printf("\n c=%i.",c);
}

void main()
{
  float x,f;int a,b;
  printf("\n\n Enter the value of x to get the result(3*x-1):");
  scanf("%f",&x);
  f=formula(x);
  printf("\n The Result is %f.",f);
  printf("\n Enter the valve of a and b to get the Square root of the added value of their square:");
  scanf("%d %d",&a,&b);
  printf("\n Result is ");
  display(a,b);

}
