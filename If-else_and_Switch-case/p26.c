
/*#26 Program to check if a character is alphabet,digit or special character.  */

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("enter any character");
scanf("%c",&a);
	if((a>64 && a<91) || (a>96 && a<123))
			printf("Alphabet");
	else if(a>47 && a<58)
		printf("digit");
	else
		 printf("special character");
getch();
}
