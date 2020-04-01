/*4. Write a simple C program that will read in a sequence of ASCII characters and write out a sequence of encoded characters in its
 place. If a character is a letter or a digit, we will replace it with the next character in the character set, except that Z will be
 replaced by A, z by a, and 9 by 0. Thus 1 becomes 2, C becomes D, p becomes q, and so on. Any character other than a letter or a digit will be
  replaced by a period (.). */



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
