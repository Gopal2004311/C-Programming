/* write a program to calculate multiplication of matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],b[10][10],i,j,rows,cols;
 clrscr();
 printf("\n enter how many rows and cols:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter rows and cols:");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   scanf("%d",&a[i][j]);
   }
  }
  printf("\n first matrix is:\n");
  for(i=0;i<rows;i++)
  {
   for(j=0;j<cols;j++)
    {
     printf("\t %d",a[i][j]);
     }
      printf("\n");
      }
   printf("\n enter how many rows and cols for second matrix:");
   scanf("%d %d",&rows,&cols);
   printf("\n enter rows and cols:");
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
     {
      scanf("%d",&b[i][j]);
      }
     }
   printf("\n second matrix is:\n");
   for(i=0;i<rows;i++)
    {
     for(j=0;j<cols;j++)
     {
      printf("\t %d",b[i][j]);
      }
      printf("\n");
      }
   printf("\n multiplication of two matrixes:");
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
    {
     printf("\t %d",a[i][j]*b[i][j]);
     }
     printf("\n");
     }
    getch();
    return 0;
    }