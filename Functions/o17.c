/*#17. Program to Enter a Matrix and Get its Transpose and then Getting the sum and subtraction of Both the Matrix and getting the Sum of Diagonal Elements of Every Matrix we Get.*/
#include<stdio.h>
#define ROW 5
#define COL 5
int main()
{
    int arr[ROW][COL],trans[COL][ROW],sum[COL][ROW],sub[COL][ROW],s=0,i,j;
    printf("\n Enter the Elements of Matrix:");
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
    {
        scanf("%d",&arr[i][j]);
        trans[j][i]=arr[i][j];
    }
    printf("\n Entered Matrix:\n");
      for(i=0;i<ROW;i++)
     { printf("\n");
        for(j=0;j<COL;j++)
    {
        printf("%d ",arr[i][j]);
    }
     }
     printf("\n Sum of Diagonal Elements of the Matrix: ");
      for(i=0;i<ROW;i++)
     {
       s+=arr[i][i];
     }
     printf("%d",s);
     s=0;
    printf("\n The Transpose of the Entered Matrix :\n");
     for(i=0;i<ROW;i++)
     { printf("\n");
        for(j=0;j<COL;j++)
    {
        printf("%d ",trans[i][j]);
    }
     }
      printf("\n Sum of Diagonal Elements of the Transpose Matrix: ");
      for(i=0;i<ROW;i++)
     {
        s+=trans[i][i];
     }
       printf("%d",s);
       s=0;
    printf("\n The Sum of Entered Matrix and its Transpose :\n");
     for(i=0;i<ROW;i++)
     { printf("\n");
        for(j=0;j<COL;j++)
        {
            sum[i][j]=arr[i][j] + trans[i][j];
            printf("%d ",sum[i][j]);
        }
     }
      printf("\n Sum of Diagonal Elements of the Sum Matrix: ");
      for(i=0;i<ROW;i++)
     {
        s+=sum[i][i];
     }
       printf("%d",s);
       s=0;
      printf("\n The Subtraction of Entered Matrix and its Transpose :\n");
     for(i=0;i<ROW;i++)
     { printf("\n");
        for(j=0;j<COL;j++)
        {
            sub[i][j]=arr[i][j] - trans[i][j];
            printf("%d ",sub[i][j]);
        }
     }
      printf("\n Sum of Diagonal Elements of the Subtraction Matrix: ");
      for(i=0;i<ROW;i++)
     {
       s+=sub[i][i];
     }
       printf("%d",s);
    return(0);
}
