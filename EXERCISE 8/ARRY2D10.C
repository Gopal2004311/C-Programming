/* write a program to calculate sum of elements of each row and column */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,rows,cols,j;
 clrscr();
 printf("\n enter how many row and cols in a matrix:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter matrix elements:");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   scanf("%d",&a[i][j]);
   }
   printf("\n");
   }
  printf("\n matrix is:\n");
  for(i=0;i<rows;i++)
  {
   for(j=0;j<cols;j++)
   {
    printf("\t %d",a[i][j]);
    }
    printf("\n");
    }
    if(rows==cols)
    printf("\n this is a matrix");
    else
    printf("\n this is not a matrix");
   getch();
   return 0;
   }