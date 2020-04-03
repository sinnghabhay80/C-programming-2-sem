/*#7. Program to print the real and distinct roots of a quadratic equation.*/
#include<stdio.h>
#include<math.h>
float calroot(float a,float b,float c)
{    float d,x1,x2;
    d = (b * b) - (4 * a *c);

  	if(d > 0)
  	{
  		x1= (-b + sqrt(d) / (2 * a));
  		x2 = (-b - sqrt(d) / (2 * a));
		printf("\n Two Distinct Real Roots Exists: root1 = %.2f and root2 = %.2f", x1, x2);
  	}
  	else printf("\n Real and Distinct Roots Does not exist!!");

  	return 0;
}

void main()
{
    float a,b,c;
    printf("\n Enter the value of x^2:");
    scanf("%f",&a);
    printf("\n Enter the value of x:");
    scanf("%f",&b);
    printf("\n Enter the value of constant:");
    scanf("%f",&c);
   calroot(a,b,c);

}
