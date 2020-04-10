/*#14. Program to check for a string to be pallendrome by Functions and then reversing it. */
#include<stdio.h>
#define MAX 20

int isPalindrome(char []);
void printrev( char str[])
{   int i=0,s=0;
    while (str[i]!='\0')
	{
		s++;
		i++;
	}
    printf("\n The reverse is:");
	for(i=0;i<s;i++)
	{
		printf("%c",str[s-1-i]);
	}
}
int main()
{
    char str[MAX];

    printf("\n Enter String : "); gets(str);
    printf("\n String given by you is : %s",str); //0 is false, any other number is true

    if(isPalindrome(str))
        printf("\n String is Palindrome !!");
    else
        printf("\n String is not Palindrome !!");
    printrev(str);
    return(0);
}
int isPalindrome(char str[])
{
    int i,j,m;

    for(i=0;str[i]!='\0';i++);

     m=i;
    for(j=0,i--;j<=(m/2);i--,j++)
        if(str[i]!=str[j])
            return(0);

    return(1);
}
