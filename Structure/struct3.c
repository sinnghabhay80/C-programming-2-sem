/*3. Program to read and display date by structure functions.*/
#include <stdio.h>

struct dat
{
    int day;
    int mon;
    int year;
};
struct stud
{
    struct dat d;
    int rollno;
    char name[20];
};
struct dat read()
{
    struct dat x;
    printf("\n Enter day :");scanf("%d",&x.day);
    printf("\n Enter month of :");scanf("%d",&x.mon);
    printf("\n Enter year of :");scanf("%d",&x.year);
    return(x);
};
struct dat display(struct stud s1)
{
    struct dat dd;
    printf("\n Day : %d",dd.day);
    printf("\n Month : %d",dd.mon);
    printf("\n Year : %d",dd.year);

};

int main()
{
    struct stud s1;

    printf("\n Enter Name : "); scanf("%s",s1.name);
    printf("\n Enter RollNo : ");scanf("%d",&s1.rollno);
    s1.d=read();
    display(s1);
    return(0);
}
