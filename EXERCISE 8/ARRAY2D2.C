/* write a program to calculate sum of all elements of a matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,j,sum=0,rows,cols;
 clrscr();
 printf("\n enter how many row and cols you want in array:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter rows and cols:");
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
     printf("\t %d",a[i][j]);
     sum=sum+a[i][j];
     }
     printf("\n");
     }
     printf("\n sum of all elements of an matrix:%d",sum);
     getch();
     return 0;
     }
