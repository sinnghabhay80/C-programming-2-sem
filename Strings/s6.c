/*#6. Program to give the plural form of an Entered Noun. */
#include<stdio.h>
void main()
{
 char str[20],str1[20];int i=0,j=0;
 printf("\n Enter the Noun:");
 gets(str);
while(str[j]!='\0')
{j++;
}

 j--;

 while(i<=j)
       { str1[i]=str[i];
         i++;}
 if(str[j]=='y' )
     { str1[j]='i';str1[j+1]='e';str1[j+2]='s';
      }
  else if(str[j]=='s' || (str[j-1]=='c' && str[j]=='h') || (str[j-1]=='s' && str[j]=='h'))
     {  str1[j+1]='e';str1[j+2]='s';
      }
  else str1[j+1]='s';

 printf("\n The plural form is:%s",str1);
 }


