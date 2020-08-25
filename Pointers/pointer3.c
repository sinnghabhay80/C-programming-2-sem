/*3. To count no. of vowels in a string.*/
#include <stdio.h>
char mtolow(char c)
{
    return((c>='A' && c<='Z')?(c+'a'-'A'):c);
}
int mystrlen(char *s) //runtime binding s=&a[1]
{
    int j;
    for(j=0;*s!='\0';s++)
    {
        *s=mtolow(*s);
        if(*s=='a' || *s=='e' || *s=='i'|| *s=='o'|| *s=='u')
        j++;
    }; // s[j] *(s+j)

    return(j);
}

int main()
{
    char *str, a[20]; // static pointer - compile time binding a it is &a[0]
    int i;

    printf("\n Enter String : "); scanf("%s",a);
    str=a;
    i=mystrlen(a);

    printf("\n There are %d vowels in  %s ",i,str);
    return(0);
}
