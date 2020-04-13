#include<stdio.h>
#define MAX 30
char substr[MAX];
char* extractsubstring(char str[],int start,int end)
{
    int i,j;
    for(i=start,j=0;i<end && str[i]!='\0';i++)
        substr[j++]=str[i];
    substr[j]='\0';
    printf("\n The Substring is %s.",substr);
    return substr;
}
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
            return(1);
        else if(mytolower(str1[i])<mytolower(str2[i]))
            return(1);
    }
    return(0);

}
int main()
{
    char str[MAX],strc[MAX];int start,end;
    printf("\n Enter the String:");
    gets(str);
      printf("\n Enter a string to check if it is Equal or Not:");
    gets(strc);
    printf("\n Enter Start:");scanf("%d",&start);
     printf("\n Enter End:");scanf("%d",&end);

    extractsubstring(str,start,end);

    if(mystrcmp(substr,strc)==0)
        printf("\n Both Strings Are Equal!!");
    else
        printf("\n Both Strings are Different!!");
    return(0);
 }
