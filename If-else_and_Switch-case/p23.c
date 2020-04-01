
/*#23 write a switch statement that will examine the value of an integer variable called flag and print one of
the following messages , depending on the value assigned to flag.
a) HOT, if flag has a value of 1
b) LUKE WARM, if flag has a value of 2
c)COLD, if flag has a vlue of 3
d) OUT OF RANGE, if flag has any other value
*/

#include<stdio.h>
void main()
{
    int flag;
    printf("\n Enter the value of tbe Flag:");
    scanf("%d",&flag);
    switch(flag)
    {
        case 1 : printf("\n HOT");
                 break;
        case 2 : printf("\n LUKE WARM");
                 break;
        case 3 : printf("\n COLD");
                 break;
        default : printf("\n OUT OF RANGE");
                  break;
    }
    getchar();
}

