/*5. Structure nad Union Difference.*/
#include<stdio.h>
struct sjob
{
    char name[32];
    float salary;
    int wn;
};
union  ujob
{
    char name[32];
    float salary;
    int wn;
};
int main()
{
    struct sjob s;
    union ujob u;
     printf("\n Size of Union:%d",sizeof(u));
     printf("\n Size of Structure:%d",sizeof(s));
     printf("\n Enter name in union:");
     scanf("%s",u.name);
     printf("\n Enter Worker No. in Union:");
     scanf("%d",&u.wn);
     printf("\n Enter Salary in Union:");
     scanf("%f",&u.salary);

     printf("\n Enter name in Structure:");
     scanf("%s",s.name);
     printf("\n Enter Worker No. in Structure:");
     scanf("%d",&s.wn);
     printf("\n Enter Salary in Structure:");
     scanf("%f",&s.salary);

     printf("\n Name in Union:%s",u.name);
     printf("\n Worker No. in Union:%d",u.wn);
     printf("\n Salary in Union:%f",u.salary);

     printf("\n Name in Structure:%s",s.name);
     printf("\n Worker No. in Structure:%d",s.wn);
     printf("\n Salary in Structure:%f",s.salary);

     return 0;
}
