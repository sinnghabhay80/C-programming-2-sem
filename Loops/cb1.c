/*#Bonus1.	Write a C program that prompts the user to enter the date as three integer values for the month, the day in the month, and the year.
            The program should then output the date in the form 31st December 2003 when the user enters, say 12 31 2010. The program has to work out when
            superscripts “th”, “nd”, “st”, and “rd” need to be appended to the day value.
            The programmer should not forget 1st, 2nd, 3rd, 4th; and then 11th, 12th, 13th, 14th; and 21st, 22nd, 23rd, and 24th.  */


#include<stdio.h>
void main()
{
    int date,month,year;
    printf("\n Enter the date:");
    scanf("%d",&date);
    printf("\n Enter the month:");
    scanf("%d",&month);
    printf("\n Enter the year:");
    scanf("%d",&year);
    if(date%10==1)
    {
        if(date==11)
            printf(" %dth",date);
        else
            printf(" %dst",date);
    }
     else if(date%10==2)
    {
        if(date==12)
            printf(" %dth",date);
        else
            printf(" %dnd",date);
    }
     else if(date%10==3)
    {
        if(date==11)
            printf(" %dth",date);
        else
            printf(" %drd",date);
    }
    else
         printf(" %dth",date);
    switch(month)
    {
        case 1 : printf(" January ");
                 break;
        case 2 : printf(" February ");
                 break;
        case 3 : printf(" March ");
                 break;
        case 4 : printf(" April ");
                 break;
        case 5 : printf(" May ");
                 break;
        case 6 : printf(" June ");
                 break;
        case 7 : printf(" July ");
                 break;
        case 8 : printf(" August ");
                 break;
        case 9 : printf(" September ");
                 break;
        case 10 : printf(" October ");
                 break;
        case 11 : printf(" November ");
                 break;
        case 12 : printf(" December ");
                 break;
        default : break;
    }
    printf("%d",year);
    getchar();
}
