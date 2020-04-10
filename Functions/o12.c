/*#12. Program to find the sum,average and no. of elements equal to or more than the Average  of elements of an array. */
#include<stdio.h>
#define MAX 5

int sumofelements(int a[MAX],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum=sum+a[i];
    return(sum);
}
float average(int a[MAX],int size)
{
    float av=0;
     av=(sumofelements(a,size)/size);
     return(av);
}
int countsameelelements(int a[MAX],int size)
{
    int i=0,c=0;
    for(i=0;i<size;i++)
        if(a[i]>=average(a,size))
             c++;
    return(c);
}
int main()
{
    int i,arr[MAX],sum,z,c;float av;
    printf("\n Enter the Array:");
    for(i=0;i<MAX;i++)
        scanf("%d",&arr[i]);
        sum=sumofelements(arr,i);
    av=average(arr,i);
    c=countsameelelements(arr,i);
     printf("\n Sum of the Elements of Array is %d.",sum);
    printf("\n Average of the Elements of Array is %f.",av);
    printf("\n No. of Elements more than or equal to Average:%d.",c);
 return(0);
}
