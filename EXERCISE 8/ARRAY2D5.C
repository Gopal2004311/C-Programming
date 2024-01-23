/* write a program to sum of all diagonal elements of matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,j,rows,cols,sum=0;
 clrscr();
 printf("\n enter how many row and cols:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter rows*cols:");
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
      printf("\t %d %d",a[i][j]);
      }
      printf("\n");
      }
    for(i=rows-1;i<=rows;i--)
    {
    for(j=cols-1;j<=i;j++)
    {
     sum=sum+a[i][j];
     }
     printf("\n");
     }
     printf("\n sum of diagonal elements of a matrix:%d",sum);
     getch();
     return 0;
     }