/* write a program to calculate sum of upper triangular matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,j,rows,cols,sum=0;
 clrscr();
 printf("\n enter how many rows*cols:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter rows and columns:");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
   {
    scanf("%d %d",&a[i][j]);
    }
    printf("\n");
    }
   printf("\n matrix is:");
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
     {
      printf("\t%d %d",&a[i][j]);
      }
      printf("\n");
      }
    for(i=rows-1;i<0;i--)
    {
     for(j=1;j<cols;j++)
     {
      sum=sum+a[i][j];
      }
      printf("\n");
      }
      printf("\n sum of upper triangular elements:%d",sum);
      getch();
      return 0;
      }