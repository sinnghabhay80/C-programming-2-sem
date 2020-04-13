/*#15. Program for Making A user defined String compare Function. */
#include<stdio.h>
#define MAX 30
char mytolower(char ch)
{
     if(ch<='A' && ch>='Z')
        ch=(ch+32);
     return(ch);
}
int mystrcmp(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(mytolower(str1[i])>mytolower(str2[i]))
            return(-1);
        else if(mytolower(str1[i])<mytolower(str2[i]))
            return(1);
    }
    return(0);

}
int main()
{
    char str1[MAX],str2[MAX];
    printf("\n Enter the First String:");
    gets(str1);
     printf("\n Enter the Second String:");
    gets(str2);
    if(mystrcmp(str1,str2)==0)
        printf("\n Both Strings are Equal!!");
    else if(mystrcmp(str1,str2)>0)
       printf("\n %s comes earlier than %s.",str1,str2);
    else
        printf("\n %s comes earlier than %s.",str2,str1);
    return(0);
}
