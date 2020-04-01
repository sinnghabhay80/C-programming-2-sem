/*#3. Programme to check the case of Alphabet and changing it to the other case.*/
#include<stdio.h>
int isupper(char ch)
{
    return(ch>='A' && ch<='Z');
}
int islower(char ch)
{
    return(ch>='a' && ch<='z');
}
char change(char ch)
{
    if(isupper(ch))
         return(ch+('a'-'A'));
    else if(islower(ch))
            return(ch-('a'-'A'));
    else
        printf("\n Character is not alphabet.");
}
int main()
{
    char ch;
    printf("\n Enter the Character:");
    scanf("%c",&ch);
    if(isupper(ch))
         printf("\n Character is Upper Case.");
    else if(islower(ch))
            printf("\n Character us lower Case.");
    else
        printf("\n Character is not alphabet.");
    printf("\n The Changed Character is: %c",change(ch));
    return(0);
}
