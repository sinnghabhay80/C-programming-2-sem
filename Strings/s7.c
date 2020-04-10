/*#7. Program for string contatination. */
#include<stdio.h>
void main()
{
 char s1[20],s2[20],s3[20];int i=0,j=0,n=0;
 printf("Enter the first string:");
 gets(s1);
 printf("Enter the Second string:");
 gets(s2);
 while(s1[i]!='\0')
 i++;
 while(s2[j]!='\0')
 j++;
 while(n<i)
 {s3[n]=s1[n];
  n++;
 }
 i=0;
 s3[n]=' ';
 n++;
 while(i<j)
 {s3[n]=s2[i];i++;n++;
 }
 printf("The concatinated string is: %s",s3);

 }
