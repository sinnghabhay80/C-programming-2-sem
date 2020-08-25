/*4.Write a C program to create, initialize and use pointers to add two numbers using pointers.
and to swap two numbers using pointers.*/

#include<stdio.h>
void add()
{
    int a,b,*ptr1,*ptr2;
    printf("\n Enter 2 Numbers:");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("Sum id %d.",(*ptr1+*ptr2));
}
void swap()
{
     int a,b,*ptr1,*ptr2,t;
    printf("\n Enter 2 Numbers:");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("\n Before Swapping: a=%d and b=%d",*ptr1,*ptr2);
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
    printf("\n After Swapping: a=%d and b=%d",*ptr1,*ptr2);
}
int main()
{
    int ch;
    printf("\n Which Operation would you like to Perform:\n\n\t1. Adding of 2 Numbers\n\t2. Swapping of 2 Numbers\n\n Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : add();
                 break;
        case 2 : swap();
                 break;
        default :  printf("\n Invalid Choice!!!");
    }
    return 0;
}
