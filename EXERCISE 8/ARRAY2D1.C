/*write a program to find maximum and minimum element of an matrix*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i,j,rows,cols,max,min;
 clrscr();
 printf("\n enter how many matrix elements:");
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
   printf("\n matrix is:");
   for(i=0;i<rows;i++)
   {
     for(j=0;j<cols;j++)
     {
      printf("\t %d",a[i][j]);
      }
      printf("\n");
      }
      max=0;
      for(i=0;i<rows;i++)
      {
	for(j=0;j<cols;j++)
	{
	 if(a[i][j]>max)
	 max=a[i][j];
	 }
	 printf("\n");
	 }
	 printf("\n largest number of a matrix is:%d ",max);
	 min=1;
	 for(i=0;i<rows;i++)
	 {
	 for(j=0;j<cols;j++)
	 {
	   if(a[i][j]<min)
	   min=a[i][j];
	   }
	   printf("\n");
	   }
	   printf("\n smallest number of a matrix is:%d",min);
	 getch();
	 return 0;
	 }
