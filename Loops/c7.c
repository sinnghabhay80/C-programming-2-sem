/*7. Write a loop that will generate every third integer, beginning with i= 2 and continuing for all integers that are less than 100. Calculate the sum of those integers that are evenly divisible by 5. Use two different methods to carry out the test.
               (a) Use the conditional operator (? :). (b) Use an if - else statement. */
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
 i=2;sum=0;
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
