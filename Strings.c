/*#1 Program to convert lower case to upper case alphabets. */


#include<stdio.h>
#define MAX 20
void main()
{
	char str[MAX]; int i=0,c=0;
	printf("\n Enter srting:");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]+('A'-'a');
			i++;
		}

	}
	printf("%s",str);
	getchar();
}

/*#2 Program to count number of alphabet,digits and special character in a given string.*/


#include<stdio.h>
#include<conio.h>
#define MAX 20
int main()
{

	char str[MAX];
	int i=0,a=0,d=0,sp=0;
	printf("\n Enter string:");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			a++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			sp++;
		}
		i++;
	}
   printf("\n Number of alphabets in the string: %d",a);
   printf("\n Number of digits in the string: %d",d);
   printf("\n Number of special chacacters in the string: %d",sp);
	return(0);
}

/*#3 Program to print the size of a given string and then print its reverse.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char x[50];
	int s=0,i=0;
	printf("enter the string: ");
	scanf("%s",x);
	while (x[i]!='\0')
	{
		s++;
		i++;
	}
	printf("%s",x);
	printf("\n size is %d",s);
	for(i=0;i<s;i++)
	{
		printf("\n %c",x[s-1-i]);
	}
	getch();
}
