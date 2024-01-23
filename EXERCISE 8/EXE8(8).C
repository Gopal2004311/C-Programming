/* write a program to transpose matrix elements */
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
   for(j=0;j<rows;j++)
   {
    for(i=0;i<cols;i++)
    {
     b[j][i]=a[i][j];
     }
     }
  printf("\n transpose matrix is:\n");
  for(j=0;j<cols;j++)
  {
   for(i=0;i<rows;i++)
   {
    printf("\t %d",b[j][i]);
    }
    printf("\n");
    }
     getch();
     return 0;
     }