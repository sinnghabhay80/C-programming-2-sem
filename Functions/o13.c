/*#13. Program to find the length of a String,no. of apperance of a character and no. of vowels using Functions.*/
#include<stdio.h>
#define MAX 20
int strlen(char str[MAX])
{
    int i;
    for(i=0;str[i]!='\0';i++);
        return(i);
}
int charcount(char str[MAX],char ch)
{
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
        if(str[i]==ch)
             c++;
    return(c);
}
int countvowel(char str[MAX])
{
    int v=0,i;
     for(i=0;str[i]!='\0';i++)
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' )
            v++;
    return(v);
}
int main()
{
    char str[MAX],ch;int size,c,vowel;
    printf("\n Enter the String:");
    scanf("%s",str);
    printf("\n What character you want to count:");
    fflush(stdin);
    scanf("%c",&ch);
    size=strlen(str);
    c=charcount(str,ch);
    vowel=countvowel(str);
    printf("\n The String %s has %d Characters.",str,size);
    printf("\n No. of times vowels in %s string is %d.",str,vowel);
    printf("\n The Character %c is occuring %d times in String %s,",ch,c,str);
    return(0);
}

