/*1. To Enter and display date with rejecting the Invalid Ones.*/
#include<stdio.h>

struct det
{
    int day;
    int mon;
    int year;
}; //user defined data type

int main()
{
    struct det a,b;

    printf("Enter Day :"); scanf("%d",&a.day);
    printf("Enter Month :"); scanf("%d",&a.mon);
    printf("Enter Year :"); scanf("%d",&a.year);
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

        else if(a.day>28)
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

    printf(" Date Entered is : %d-%d-%d",a.day,a.mon,a.year);
}
