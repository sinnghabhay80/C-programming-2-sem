/*12	Write a program to print all the even and odd numbers of a certain range as indicated by the user*/
#include<stdio.h>
void main()
{
  int ns,ne,num,i=0;
  printf("\n Enter the starting and end point: ");
  scanf("%d %d",&ns,&ne);
  num=ns;
  printf("\n Even Numbers in the given range are:");
  while(i<ne)
  {
      if(num%2==0)
      {
         printf("%d,",num);
      }
      num++;
      i++;
  }
  num=ns;
  i=0;
  printf("\n Odd Numbers in the given range are:");
  while(i<ne)
  {
      if(num%2!=0)
      {
          printf("%d,",num);
      }
      num++;
      i++;
  }
  getchar();
}
