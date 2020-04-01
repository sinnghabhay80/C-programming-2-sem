/*#4. Program to check a nuber for being prime and also calculating its Factorial.*/
#include<stdio.h>
int fact(int n)
{
 int i,f=1;
 for(i=1;i<=n;i++)
  f=f*i;
  return(f);
}
int isprime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
        if(n%i==0)
         return(1);
}
void main()
{
 int n,f;
  printf("\n Enter a number to get Factorial and to know if it is a prime number:");
  scanf("%d",&n);

  printf("\n The Factorial is: %d", fact(n));
  if(isprime(n))
    printf("\n The Number is Prime.");
  else
    printf("\n The number is Not Prime.");
  getchar();
  }
