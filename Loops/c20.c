 /*20.	Write a C program to print the sum of the following series up to n terms where n is given by the user.
          x-x^3/3+x^5/5-... (value of x given by user)   */
#include<stdio.h>
#include<math.h>

 int fact(int j)
 { int f=1;
   for(;j>0;j--)
     f*=j;
   return(f);
  }
void main()
{ int n,x,i=0;float num=0,sum=0;

  printf("\n Enter the value of x:");
  scanf("%d",&x);
  printf("\n Enter the number of terms you want sum of:");
  scanf("%d",&n);
  while(i<n)
  { num= pow(-1,i)*(pow(x,2*i+1)/fact(2*i+1));
    sum+=num;
    i++;
  }
  printf("\n The obtained sum is: %f",sum);
  getchar();
  }
