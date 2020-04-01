
/*#21.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
void main()
{
    int bs,hra,da,gs;
    printf("\n Enter the basic salary of the Employee:");
    scanf(("%u",&bs));
    if(bs<=10000)
    {
        hra=(0.2*bs);
        da=(0.8*bs);
    }
    else if(bs>=10000 && bs<=20000)
    {
        hra=(0.25*bs);
        da=(0.9*bs);
    }
   else
    {
        hra=(0.3*bs);
        da=(0.95*bs);
    }
    gs=(bs+hra+da);
    printf("\n The grioss Salary of the employee is: %u",gs);
    getchar();

}

