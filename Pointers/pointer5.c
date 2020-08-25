/*5. Write a C program to input and print array elements using pointer,copy an array,swap 2 arrays,reverse an array and search an element in an array*/
#include<stdio.h>
void io()
{
    int a[5],*ptr,i;
    ptr=a;
    printf("\n Enter the Array:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr+i));
    printf("\n Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr+i));
}
void copy()
{
    int a[5],b[5],*ptr1,*ptr2,i;
    ptr1=a;ptr2=b;
    printf("\n Enter the Array to be Copied:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr1+i));
    printf("\n Entered Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr1+i));
    for(i=0;i<5;i++)
         *(ptr2+i)=*(ptr1+i);
    printf("\n Copied Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr2+i));
}
void swap()
{

    int a[5],b[5],*ptr1,*ptr2,t,i;
    ptr1=a;ptr2=b;
    printf("\n Enter the First Array:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr1+i));
    printf("\n Enter the Second Array:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr2+i));
    printf("\n Before Swapping:");
    printf("\n First Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr1+i));
    printf("\n Second Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr2+i));
    for(i=0;i<5;i++)
    {
        t=*(ptr1+i);
        *(ptr1+i)=*(ptr2+i);
        *(ptr2+i)=t;
    }
    printf("\n After Swapping:");
    printf("\n First Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr1+i));
    printf("\n Second Array : ");
    for(i=0;i<5;i++)printf("%d ",*(ptr2+i));
}
void reverse()
{
    int a[5],*ptr,i,j,t;
    ptr=a;
    printf("\n Enter the Array:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr+i));
    printf("\n Array Before Reversing: ");
    for(i=0;i<5;i++)printf("%d ",*(ptr+i));
    for(i=0,j=4;i<(5/2);i++,j--)
    {
        t=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=t;
    }
     printf("\n Array After Reversing: ");
    for(i=0;i<5;i++)printf("%d ",*(ptr+i));
}
void search()
{
    int a[5],*ptr,i,s,flag;
    ptr=a;
    printf("\n Enter the Array:");
    for(i=0;i<5;i++)scanf("%d",&*(ptr+i));
    printf("\n Array Before Reversing: ");
    for(i=0;i<5;i++)printf("%d ",*(ptr+i));
    printf("\n Element you want to Search:");
    scanf("%d",&s);
    for(i=0;i<5;i++)
        if(*(ptr+i)==s)
        {
            flag=1;
            break;
        }
     if(flag==1)
       printf("\n Element Found at Index %d.",i);
    else
        printf("\n Element Not Found!!!");
}
int main()
{
    int ch;
    printf("\n Which Operation You want to Do:\n\n\t1. Input and Print Array\n\t2. Copy One Array to Another\n\t3. Swap 2 Arrays\n\t4.Reverse an Array\n\t5. Search for an Element in Array\n\n Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : io();
                 break;
        case 2 : copy();
                 break;
        case 3 : swap();
                 break;
        case 4 : reverse();
                 break;
        case 5 : search();
                 break;
        default : printf("\n Invalid Choice!!!");
    }
    return 0;
}
