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
