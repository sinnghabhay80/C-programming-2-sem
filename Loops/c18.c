
/*18.	Write a C program to calculate the sum of prime numbers in a range*/
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
