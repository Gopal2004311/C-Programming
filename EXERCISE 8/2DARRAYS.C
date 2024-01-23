#include<stdio.h>
#include<conio.h>
int main()
{
  int a[10][10],i,j,rows,cols,sum=0;
  clrscr();
  printf("\n enter how many row and cols in a matrix:");
  scanf("%d %d",&rows,&cols);
  printf("\enter rows*cols matrix elements:");
  for(i=0;i<rows;i++)
  {
   for(j=0;j<cols;j++)
   {
     scanf("%d",&a[i][j]);
     }
     }
      printf("\n matrix is :\n");
      for(i=0;i<rows;i++)
      {
	for(j=0;j<cols;j++)
	{
	  printf("\t %d",a[i][j]);
	  sum=sum+a[i][j];
	  }
	  printf("\n");
	  }
	  printf("\n sum of all array elements:%d",sum);
	  getch();
	  return 0;
	  }