
/*#25  write an appropriate control structure that will examine the value of a floating point variable called temp
and print one of the following messages,depending on the value assigned to temp.
a) ICE, if the value of temp is less than 0
b) WATER, if the value of temp is between 0 and 100
c) STEAM, if the value of temp is greater than 100
*/

#include<stdio.h>
void main()
{
    float temp;
    printf("\n Enter the value of temp:");
    scanf("%f",&temp);
    if(temp<0)
        printf("\n ICE");
    else if(temp>=0 && temp<=100)
        printf("\n WATER");
    else
        printf("\n STEAM");
    getchar();
}

