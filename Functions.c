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

/*#2 Program for checking the Entered chaeracter is Digit or Not.*/

#include<stdio.h>
int isdigit(char ch)
{
 return(ch>='0' && ch<='9');

 }
int main()
{
 char ch;
  printf("\n Enter a single value:");
  scanf("%c",&ch);
  if(isdigit(ch))
   printf("\n The value is a Digit!!");
  else printf("\n The value is Not a Digit!!");
   return(0);
    }

/*#3. Programme to check the case of Alphabet and changing it to the other case.*/
#include<stdio.h>
int isupper(char ch)
{
    return(ch>='A' && ch<='Z');
}
int islower(char ch)
{
    return(ch>='a' && ch<='z');
}
char change(char ch)
{
    if(isupper(ch))
         return(ch+('a'-'A'));
    else if(islower(ch))
            return(ch-('a'-'A'));
    else
        printf("\n Character is not alphabet.");
}
int main()
{
    char ch;
    printf("\n Enter the Character:");
    scanf("%c",&ch);
    if(isupper(ch))
         printf("\n Character is Upper Case.");
    else if(islower(ch))
            printf("\n Character us lower Case.");
    else
        printf("\n Character is not alphabet.");
    printf("\n The Changed Character is: %c",change(ch));
    return(0);
}

/*#4. Progrtam to calculate Factorial of a number and to know if the number is a prime number. */


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

/*#5. Program to check a number is a krishnamurthy number or not using user defined functions.*/


#include<stdio.h>
int iskm(int n)
{
      int s=0,d,i=1,f=1,t;

    t=n;
    while(n>0)
    {
        f=1;
        d=n%10;
        for(i=1 ;i<=d;i++)
            f=f*i;
        s+=f;
        n/=10;
    }
    if(t==s)
         printf("\n The number %d is Krishnamurthy Number.",t);
    else printf("\n  The number %d is not Krishnamurthy Number.",t);
}
void main()
{
    int n;
    printf("\n Enter a Number to check for being Krishnamurthy number:");
    scanf("%d",&n);
    iskm(n);
}
