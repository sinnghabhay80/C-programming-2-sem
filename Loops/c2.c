/*2. We want to display the consecutive digits 0, 1, 2, . . . ,9, with one digit on each line(while, do- while, for loop) */
#include<stdio.h>
void main()
{
    int n=0;
    while(n!=10)
    {
        printf("\n %d",n++);
    }
    n=0;
    for( ;n<10;n++)
    {
       printf("\n %d",n);
    }
    n=0;
    do
    {
       printf("\n %d",n++);
    }while(n!=10);
    getchar();
}
