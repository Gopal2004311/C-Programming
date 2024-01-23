/* write a program to calculate sum of all even elements of matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,j,rows,cols,sum=0;
 clrscr();
 printf("\n enter rows*cols:");
 scanf("%d %d",&rows,&cols);
 printf("\n enter rows and columns:");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
   {
     scanf("%d",&a[i][j]);
     }
     printf("\n");
     }
   printf("\n matrix is:");
   for(i=0;i<rows;i++)
   {
   for(j=0;j<cols;j++)
    {
     printf("\t %d",a[i][j]);
     if(a[i][j]%2==0)
     sum=sum+a[i][j];
     }
     printf("\n");
     }
     printf("\n sum of all even elements of an matrix:%d",sum);
     getch();
     return 0;
     }