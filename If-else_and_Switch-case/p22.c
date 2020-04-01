
/*#22.	Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
void main()
{
    int a,amt;
    printf("\n Enter no. of Electricity Units consumed:");
    scanf("%d",&a);
    if(a<=50)
       amt=(a*0.5);
    else if(a>50 && a<=150)
        amt=(a*0.75);
    else if(a>50 && a<=250)
        amt=(a*1.2);
    else
        amt=(a*1.5);
    amt=(amt*0.2);
    printf("\n The total Electricity Bill is: %d",amt);
    getchar();

}
