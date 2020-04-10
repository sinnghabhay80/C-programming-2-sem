/*#5. Program to count the Appearance of a given number. */
#include<stdio.h>
void main()
{
 int a[100],n,num,i=0,c=0;
 printf("\n Enter how many numbers you want in the array:");
 scanf("%d",&n);
 printf("\n Now, Enter the numbers:");
 for( ;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 i=0;
 printf("\n Now, The Entered array is:");
 for( ;i<n;i++)
 {
   printf(" %d",a[i]);
 }
 i=0;
 printf("\n Enter the number you want to search for:");
 scanf("%d",&num);
 for(; i<n;i++)
 {
  if(a[i]==num)
    c++;
 }
 printf("\n The Number appears to be present %d times.",c);
 getchar();
 }




