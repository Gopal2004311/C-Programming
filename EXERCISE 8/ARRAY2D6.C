/* write a program to add of two matrix of order m*n */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i1,j1,rows1,cols1;
 int b[10][10],i2,j2,rows2,cols2,m=0,n=0,sum1=0,sum2=0;
 clrscr();
 printf("\n enter rows1*cols1:");
 scanf("%d %d",&rows1,&cols1);
 printf("\n enter rows and cols:");
 for(i1=0;i1<rows1;i1++)
 {
  for(j1=0;j1<cols1;j1++)
  {
   scanf("%d",&a[i1][j1]);
   }
   printf("\n");
   }
   printf("\n first matrix is:");
   for(i1=0;i1<rows1;i1++)
   {
    for(j1=0;j1<cols1;j1++)
    {
     printf("\t %d",a[i1][j1]);
     }
     printf("\n");
     }
  printf("\n enter rows2*cols2:");
  scanf("%d %d",&rows2,&cols2);
  printf("\n enter matrix elements:");
  for(i2=0;i2<rows2;i2++)
  {
   for(j2=0;j2<cols2;j2++)
    {
     scanf("%d",a[i2][j2]);
     }
     printf("\n");
     }
   printf("\n second matrix is:");
   for(i2=0;i2<rows2;i2++)
   {
    for(j2=0;j2<cols2;j2++)
    {
     printf("\t %d",a[i2][j2]);
     }
     printf("\n");
     }
    for(i1=0;i1<rows1;i1++)
    {
     for(j1=0;j1<cols1;j1++)
     {
      sum1=sum1+a[i1][j1];
      }
      printf("\n");
      }
     printf("\n addition of first matrix:%d",sum1);
     for(i2=0;i2<rows2;i2++)
     {
      for(j2=0;j2<cols2;j2++)
      {
       sum2=sum2+sum1;
       }
       printf("\n additin of matrix m*n:%d",sum2);
       getch();
       return 0;
       }
