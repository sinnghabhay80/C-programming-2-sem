/*19.	Write a C program to print the sum of the following series up to n terms where n is given by the user
         1+x+x^2/2+x^3/3+... (value of x given by user)              */

#include<stdio.h>

#include<math.h>
int fact(int i)
 { int f=1;
   for(;i>0;i--)
     f*=i;
   return(f);
  }
void main()
{ int n,x,i=0,num=0,sum=0;

  printf("\n Enter the value of x:");
  scanf("%d",&x);
  printf("\n Enter the number of terms you want sum of:");
  scanf("%d",&n);
  while(i<n)
  { num=(pow(x,i)/fact(i));
    sum+=num;
    i++;
  }
  printf("\n The obtained sum is: %d",sum);

  }
