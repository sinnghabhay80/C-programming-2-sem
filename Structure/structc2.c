/*2.Basic Operations on complex numbers*/
#include<stdio.h>

struct complex
{
    int r;
    int i;

}; //user defined data type

struct complex add(struct complex x, struct complex y)
{
    struct complex z;
    z.r=x.r+y.r;
    z.i=x.i+y.i;

    return(z);
}

struct complex sub(struct complex x, struct complex y)
{
    struct complex z;
    z.r=x.r-y.r;
    z.i=x.i-y.i;

    return(z);
}

struct complex product(struct complex x, struct complex y)
{
    struct complex z;
    z.r=(x.r*y.r) +(x.i*y.i)*(-1);
    z.i=(x.i*y.r) +(x.r*y.i);

    return(z);
}

struct complex divide(struct complex x, struct complex y)
{
    struct complex z,w,a;
   //numerator
    a.r=(x.r*y.r) +(x.i*(-1)*y.i)*(-1);
    a.i=(x.i*y.r) +(x.r*(-1)*y.i);
    //denominator
    w.r=(y.r*y.r) +(y.i*(-1)*y.i)*(-1);
    w.i=(y.i*y.r) +(y.r*y.i*(-1));
    z.r=a.r/(w.r+w.i);
    z.i=a.i/(w.r+w.i);

    return(z);
}


int main()
{
    struct complex a,b,c;
    int ch;

    printf("Enter First Complex Number ----->\n");
    printf("Enter Real :"); scanf("%d",&a.r);
    printf("Enter Img :"); scanf("%d",&a.i);
    printf(" \nYour number is : %d+%di",a.r,a.i);

    printf("\nEnter Second Complex Number ----->\n");
    printf("Enter Real :"); scanf("%d",&b.r);
    printf("Enter Img :"); scanf("%d",&b.i);
    printf("\n Your number is : %d+%di",b.r,b.i);

    printf("\n What Operation do you want to perform :\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n\n Enter Your Choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 : c=add(a,b);
                 printf("\n Sum is : %d+%di",c.r,c.i);
                 break;
        case 2 : c=sub(a,b);
                 printf("\n Subtraction is : %d+%di",c.r,c.i);
                 break;
        case 3 : c=product(a,b);
                 printf("\n Product is : %d+%di",c.r,c.i);
                 break;
        case 4 : c=divide(a,b);
                 printf("\n Division is : %d+%di",c.r,c.i);
                 break;
        default : printf("\n WRONG INPUT!!");
                 break;
    }
    return 0;


}
