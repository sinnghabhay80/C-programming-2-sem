/*1. Suppose status is a char-type variable and balance is a floating-point variable. We wish to assign the character C (current) to status if balance has a value of zero, and 0 (overdue) if balance has a value that is greater than zero. (using conditional operator)*/

 #include<stdio.h>

void main()
{


    char status;
    float balance;
    printf("\n Enter value of Balance:");
    scanf("%f",&balance);
    balance=(balance>0)?balance:(-1*balance);
    printf("\n The status is: %c",status);
    (balance>0)?(status='O'):(status='C');
    printf("%c",status);
    getchar();
}


/*2. We want to display the consecutive digits 0, 1, 2, . . . ,9, with one digit on each line(while, do- while, for loop) */

#include<stdio.h>
void main()
{
    int n=0;
    while(n!=10)
    {
        printf("\n %d",n++);
    }
    n=0;
    for( ;n<10;n++)
    {
       printf("\n %d",n);
    }
    n=0;
    do
    {
       printf("\n %d",n++);
    }while(n!=10);
    getchar();
}


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


/*4. Write a simple C program that will read in a sequence of ASCII characters and write out a sequence of encoded characters in its place. If a character is a letter or a digit, we will replace it with the next character in the character set, except that Z will be replaced by A, z by a, and 9 by 0. Thus 1 becomes 2, C becomes D, p becomes q, and so on. Any character other than a letter or a digit will be replaced by a period (.). */

#include<stdio.h>
void main()
{
   char a;
   printf("\n Enter a Character:");
   scanf("%c",&a);
   if(a>=65 && a<=90 || a>=97 && a<=122 )
   {
       if(a==90)
       {
           a=65;
       }
       else if(a==122)
       {
           a=97;
       }
       else
       {
           a+=1;
       }
   }
   else if(a>=48 && a<=57)
   {
       if(a==57)
       {
           a=48;
       }
       else
       {
           a+=1;
       }
   }
   else
   {
       a=46;
   }
   printf("\n The Replaced Character is:%c",a);
   getchar();
}


/*5. Write a loop that will calculate the sum of every third integer, beginning with i=2 (icy calculate the sum 2 + 5 + 8 + 11 + - ) for all values of i that are less than 100. Write the loop three different ways.                 (a) Using a while statement.                 (b) Using a do - while statement.   (c) Using a f o r statement. */

#include<stdio.h>
void main()
{
    int i=2,sum=0;
    //while
    printf("\n The sum of every third integer is(starting for 2)(while loop):");
    while(i<100)
    {
        sum+=i;
        i+=3;
    }
    printf("%d",sum);
    i=2;sum=0;
    //for loop
    printf("\n The sum of every third integer is(starting for 2)(for loop):");
    for(;i<100;i+=3)
    {
        sum+=i;
    }
    printf("%d",sum);
    i=2;sum=0;
    //do while
    printf("\n The sum of every third integer is(starting for 2)(do while loop):");
    do
    {
        sum+=i;
        i+=3;
    }while(i<100);
    printf("%d",sum);
    getchar();
}

/*6. Repeat Prob. 5 calculating the sum of every nth integer, beginning with the value assigned to nstart (i.e., for i= n s t a r t , nstart + n, nstart + 2*n, nstart + 3*n, etc.). Continue the looping process for all values of i that do not exceed nstop. */


#include<stdio.h>
void main()
{
    int nstart,nstop,n,sum=0,i=0;
    printf("\n Enter the desired starting point:");
    scanf("%d",&nstart);
    i=nstart;
    printf("\n Enter the desired ending point:");
    scanf("%d",&nstop);
    printf("\n Enter the desired gapping:");
    scanf("%d",&n);
    //while
     while(i<nstop)
    {
        sum+=i;
        i+=n;
    }
    printf("\nThe sum obtained is:%d",sum);

    sum=0;i=nstart;
    //for loop
    for(;i<nstop;i+=n)
    {
        sum+=i;
    }
    printf("\nThe sum obtained is:%d",sum);

    sum=0;i=nstart;
    //do while
    do
    {
        sum+=i;
        i+=n;
    }while(i<nstop);
    printf("\nThe sum obtained is:%d",sum);
    getchar();
}


/*7. Write a loop that will generate every third integer, beginning with i= 2 and continuing for all integers that are less than 100. Calculate the sum of those integers that are evenly divisible by 5. Use two different methods to carry out the test.                (a) Use the conditional operator (? :). (b) Use an if - else statement. */

#include<stdio.h>

void main()

{

 int v,i=2,sum=0;

 //conditional

 while(i<100)

{

	((i%5)==0)?sum+=i: printf(" ");


   	i+=3;

}

printf("\n The sum is(conditional):%d",sum);

 i=2;
sum=0;

//if else

 while(i<100)

{

if(i%5==0)

 {

   sum+=i;

   }

  i+=3;

 }

 printf("\n The sum is(if else):%d",sum);

getchar();

}


/*9. Write a complete C program for each of the problems presented below. Use whatever control structures are most appropriate for each problem : a. Calculate the cumulative product of a list of n numbers. Test your program with the following six data               items: 6.2, 12.3, 5.0, 18.8, 7.1, 12.8. */

#include<stdio.h>

void main()

{

 int n,i=0;float num,pr=1;

 printf("\n Enter hoe many numners you want:");

 scanf("%d",&n);

 printf("\n Enter the numbners one by one:");

while(i<n)

{

 scanf("%f",&num);

 pr*=num;

i++;

 }

 printf("\n The product of entered numbers is:%f",pr);

getchar();

 }


/*  b. The Fibonacci numbers are members of an interesting sequence in which each number is      equal to the sum of the previous two numbers. In other words,                             Fi = Fi-1 + Fi-2             where Fi refers to the ith Fibonacci number. By definition, the first two Fibonacci numbers  equal  1; i.e.,               F i = F 2 = 1 .             Hence,             F3 = F2 + F1 = 1 + 1 = 2            F4 = F3 + F2 = 2 + 1 = 3           Fs = F4 + F3 =3 + 2= 5         and so on. Write a program that will determine the first n Fibonacci numbers. Test the   program   with n = 7, n =10,n= 17and n=23. */


#include<stdio.h>

void main()

{

 int i=0,n,f1=1,f2=1,fn;

 printf("\n Enter how many fibonacci numbers you want to see:");

 scanf("%d",&n);

 printf("\n THE required fibonacci series is:");

 printf("%d %d",f1,f2);

 while((i+2)<n)

{

 fn=(f1+f2);

 printf(" %d ",fn);

 f1=f2;

 f2=fn;

 i++;

}

getchar();

}




/*10. A prime number is a positive integer quantity that is evenly divisible (without a remainder) only by 1 or by itself. For example, 7 is a prime number, but 6 is not. Calculate and tabulate the first n prime numbers. (Hint: A number, n, will be a prime if the remainders of n/2, n/3, n/4,. . . ,n/& are all nonzero.) Test your program by calculating the first 100 prime numbers. */


#include<stdio.h>

void main()
{
   int n, i = 3, j, c;

   printf("Enter the number of Prime numbers required: ");
   scanf("%d",&n);

   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2,");
   }

   for ( j = 2 ; j <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
	 if ( i%c == 0 )
	    break;
      }
      if ( c == i )
      {
	 printf("%d,",i);
	 j++;
      }
      i++;
   }
   getchar();
}


/*11. Write an interactive program that will read in a positive integer value and determine the following:       (i) If the integer is a prime number.       (ii) If the integer is a Fibonacci number.      Write the program in such a manner that it will execute repeatedly, until a zero value is detected for   the input quantity. Test the program with several integer values of your choice. */

#include<stdio.h>
void main()
{
    int n,n1=0,n2=1,temp,i=2,a;
    printf("\n Enter the number you want to check for being fibonacci or prime:");
    scanf("%d",&n);
    while(n2<=n)
    {
        temp=n2;
        n2+=n1;
        n1=temp;
        if(n2==n)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("\n %d is : Fibonacci.",n);
    }
    else
    {
        printf("\n %d is : Not Fibonacci.",n);
    }
     for( ;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
     if(a==1)
    {
        printf("\n %d is: Prime.",n);
    }
    else
    {
        printf("\n %d is: Not Prime.",n);
    }
     getchar();
}


/*•	Write a program to print all the even and odd numbers of a certain range as indicated by the user*/

#include<stdio.h>
void main()
{
  int ns,ne,num,i=0;
  printf("\n Enter the starting and end point: ");
  scanf("%d %d",&ns,&ne);
  num=ns;
  printf("\n Even Numbers in the given range are:");
  while(i<ne)
  {
      if(num%2==0)
      {
         printf("%d,",num);
      }
      num++;
      i++;
  }
  num=ns;
  i=0;
  printf("\n Odd Numbers in the given range are:");
  while(i<ne)
  {
      if(num%2!=0)
      {
          printf("%d,",num);
      }
      num++;
      i++;
  }
  getchar();
}



/*•	Write a C program to convert the binary equivalent of an integer number without using an array*/


#include<stdio.h>
#include<math.h>
void main()
{
 int b,d=0,r=0,i=0;
 printf("\n Enter the Binary Number:");
 scanf("%d",&b);
 while(b!=0)
 {
     r=(b%10);
     b/=10;
     d+=(r*pow(2,i));
     i++;
 }
 printf("\n The Converted Number is:%d",d);
 getchar();
 }

/*•	Write a C program to find the prime factors of a number given by the user*/

#include<stdio.h>
void main()
{
    int n,i=2,a=2,b=1;
    printf("\n Enter a Number to get its prime factors:");
    scanf("%d",&n);
    printf("\n The Prime Factors of %d are:",n);
    for( ; i<=(n/2);i++)
    {
       if(n%i==0)
       {
         for( ; a<=(i/2);a++)
         {
             if(i%a==0)
             {
               b=0;
               break;
             }
            }
            if(b=1)
            {
                printf("%d,",i);
            }
       }
    }
    getchar();
}

/*•	Write a C program to check whether a number is a power of 2 or not*/

#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,a=0;
    printf("\n Enter a number to check whether it is a power of 2 or not:");
    scanf("%d",&n);
    for( ;i<=(n/2);i++)
    {
        if(pow(2,i)==n)
        {
            a=1;break;
        }
    }
    if(a==1)
   {

    printf("\n %d is a power of 2.",n);
   }
    else
    {
            printf("\n %d is not a power of 2.",n);
    }
    getchar();
}

/*•	Write a program to find the GCD of two numbers*/

#include <stdio.h>
void main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is: %d", n1, n2, gcd);
    getchar();

}


/*•	Write a program to find the sum of digits of a number given by the user*/


#include<stdio.h>
void main()
{
    int d,n,t,s=0;
    printf("\n Enter a Number to get the sum of digits:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        s+=d;
        n/=10;
    }
    printf("\n The sum of digits of number %d is:%d",t,s);
    getchar();
}


/*•	Write a C program to calculate the sum of prime numbers in a range*/


#include<stdio.h>
 void main()
 {
   int i, a,ne,ns,s=0,n;
   printf(" ENTER THE LOWER LIMIT : ");
   scanf("%d", &ns);
   printf("\n ENTER THE UPPER LIMIT : ");
   scanf("%d", &ne);
   for(n=ns+1; n<ne; n++)
   {
     a= 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         a= 0;
         break;
       }
     if(a==1)
       s+=n;
   }
   printf("\n The Sum is:%d",s);
   getchar();
 }

 /*•	Write a C program to print the sum of the following series up to n terms where n is given by the user

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

  /*•	Write a C program to print the sum of the following series up to n terms where n is given by the user.

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

  /*Write a C program to print the following series: 0 1 1 2 3 5 8 13 .... The number of terms to be printed should be given by the user.
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


/*•	Write a C program to print the numbers that do not appear in the Fibonacci series. The number of such terms to be printed should be given by the user.*/


#include<stdio.h>
void main()
{
 int n,a,b,c,d,i,j;
 a=0;
 b=1;
 c=0;
 i=1;
 j=0;
 printf("Enter the number of terms you want in non-fibonacci series series:");
 scanf("%d",&n);
 while(i<=n)
 {
  c=a+b;
  a=b;
  b=c;
  d=a+b;
  for(j=c+1;j<d;j++) //to find the non fibonacci numbers between 2 fibonacci numbers
  {
      if(i<=n)
      {
          printf(" %d",j);
          i++;
      }
  }
 }
 getchar();
}

/*•	Write a program to check whether a number is a Krishnamurty number or not. A Krishnamurty number is one whose sum of factorial of digits equals the number*/

#include<stdio.h>
void main()
{
    int n,s=0,d,i=1,f=1,t;
    printf("\n Enter a number to check if its Krishnamurthy or not:");
    scanf("%d",&n);
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

    getchar();
}
