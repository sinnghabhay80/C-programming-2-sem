/*2. Swapping of numbers using pointers*/
#include <stdio.h>
int main()
{
    int a = 5 ; // int
    int b = 10 ; // int
    int c;

    int *ptr1, *ptr2, *ptr3;

    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    printf("\nBefore Swapping:");
    printf("\n a=%d",a);
    printf("\n b=%d",b);

    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;

    printf("\nAfter Swapping:");
    printf("\n a=%d",a);
    printf("\n b=%d",b);

    return 0;
}
