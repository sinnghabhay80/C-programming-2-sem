#include<stdio.h>
#define MAX 5

int sumofelements(int a[MAX],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum=sum+a[i];
    return(sum);
}
int main()
{
    int i,arr[MAX],sum,z;
    printf("\n Enter the Array:");
    for(i=0;i<MAX;i++)
        scanf("%d",&arr[i]);
    sum=sumofelements(arr,i);
    printf("\n Sum of the Elements of Array is %d.",sum);

}
