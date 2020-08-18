/*6. Define a structure data type named date containing 3 integers members day, month and year. develop an interactive program to perform the following tasks:
     1. to read data into structure members by a function
     2. to validate the date entered by another function
       for example: 31,4,2002-----is not a valid date as April has 30 days
     3. to print the date in the format ->  April 29,2002
*/

#include <stdio.h>

struct dat
{
    int day;
    int mon;
    int year;
};

struct dat read()
{
    struct dat x;
    printf("\n Enter day :");scanf("%d",&x.day);
    printf("\n Enter month of :");scanf("%d",&x.mon);
    printf("\n Enter year of :");scanf("%d",&x.year);
    return(x);
};

struct dat validate(struct dat a)
{
    if(a.year<1)
    {
        printf("\n INVALID YEAR!");
    exit(0);
    }
    if(a.mon>12 || a.mon<1)
    {
        printf("\n INVALID MONTH!");
    exit(0);
    }
    if(a.mon==1 && a.day>31 || a.mon==3 && a.day>31 || a.mon==5 && a.day>31|| a.mon==7 && a.day>31 || a.mon==8 && a.day>31 || a.mon==10 && a.day>31 || a.mon==12 && a.day>31)
    {
         printf("\n INVALID DATE!");
    exit(0);
    }
    else if(a.mon==2)
     {
         if(a.year%4==0 && a.day>29)

               {
                   printf("\n INVALID DATE!");
               exit(0);
               }

        else if(a.year%4!=0 && a.day>28)
            {
                   printf("\n INVALID DATE!");
               exit(0);
               }

     }
     else if(a.mon==4 && a.day>30 || a.mon==6 && a.day>30 || a.mon==9 && a.day>30 || a.mon==11 && a.day>30 )

     {
          printf("\n INVALID DATE!");
    exit(0);
     }
     else
        printf("\n VALID DATE!");
};

struct dat display(struct dat y)
{
   switch(y.mon)
   {
       case 1 : printf("\n January %d,%d",y.day,y.year);
                break;
       case 2 : printf("\n February %d,%d",y.day,y.year);
                break;
       case 3 : printf("\n March %d,%d",y.day,y.year);
                break;
       case 4 : printf("\n April %d,%d",y.day,y.year);
                break;
       case 5 : printf("\n May %d,%d",y.day,y.year);
                break;
       case 6 : printf("\n June %d,%d",y.day,y.year);
                break;
       case 7 : printf("\n July %d,%d",y.day,y.year);
                break;
       case 8 : printf("\n August %d,%d",y.day,y.year);
                break;
       case 9 : printf("\n September %d,%d",y.day,y.year);
                break;
       case 10 : printf("\n October %d,%d",y.day,y.year);
                break;
       case 11 : printf("\n November %d,%d",y.day,y.year);
                break;
       case 12 : printf("\n December %d,%d",y.day,y.year);
                break;
       default : printf("\n INVALID!");
   }
};

int main()
{
    struct dat d;
    d=read();
    validate(d);
    display(d);
    return 0;
}
