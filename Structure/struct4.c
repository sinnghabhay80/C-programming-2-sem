/*4. Make a structure Author with name and email-id as its data variables.
Write appropriate read function for this structure. Make another structure Book with name, price, quantity and author (variable of structure Author) as data members. Design appropriate read function for this structure variable. Make two variables of the book with values provided by
the user and display the email-id of the author of book with higher price*/
#include<stdio.h>
struct author
{
    char name[20];
    char email[50];
};
struct book
{
    char bname[20];
    float price;
    int quantity;
    struct author a;
};
struct book read()
{
    struct book b;
    printf("\n Enter Name of Book :");
    scanf("%s",b.bname);
    printf("\n Enter the Price:");
    scanf("%f",&b.price);
    printf("\n Enter the Quantity:");
    scanf("%d",&b.quantity);
    printf("\n Enter the Name of Author of Book :");
    scanf("%s",b.a.name);
    printf("\n Enter the E-mail Add.:");
    scanf("%s",b.a.email);
    return(b);

};

int main()
{
    struct book b1,b2;
    b1=read();
    b2=read();
    if(b1.price>b2.price)
        printf("\n %s",b1.a.email);
    else if(b1.price==b2.price)
        printf("%s and %s. SAME PRICE!!",b1.a.email,b2.a.email);
    else
        printf("\n %s",b2.a.email);
    return 0;
}
