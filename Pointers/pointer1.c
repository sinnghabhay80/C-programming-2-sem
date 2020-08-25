/*1. write a program using pointers to add two numbers*/

#include <stdio.h>

int main()
{
    int a=5,b=32,*ptr1,*ptr2;
    ptr1=&a; ptr2=&b;
    printf("a+b= %d",*ptr1+*ptr2);
    return 0;

}
