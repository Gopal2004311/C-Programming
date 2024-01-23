/* write a program to calulate multiplication of two 1d array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10][10],i1,j1,rows1,cols1,mult1=1;
 int b[10][10],i2,j2,rows2,cols2,mult2=1,ans;
 clrscr();
 printf("\n enter how many rows1 and cols1:");
 scanf("%d %d",&rows1,&cols1);
 printf("\n enter first array elements:");
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
    mult1=mult1*a[i1][j1];
    }
    printf("\n");
    }
   printf("\n enter how many rows2 and cols2:");
   scanf("%d %d",&rows2,&cols2);
   printf("\n enter secind array elements:");
   for(i2=0;i2<rows2;i2++)
   {
   for(j2=0;j2<cols2;j2++)
   {
    scanf("%d",&a[i2][j2]);
    }
    printf("\n");
    }
  printf("\n second matrix is :");
  for(i2=0;i2<rows2;i2++)
  {
   for(j2=0;j2<cols2;j2++)
   {
    printf("\t %d",a[i2][j2]);
    mult2=mult2*a[i2][j2];
    }
    printf("\n");
    }
  printf("\n multiplication of first array elements:%d",mult1);
  printf("\n multiplication of second array elements:%d",mult2);
  ans=mult1*mult2;
  printf("\n multiplication of two array elements:%d",ans);
  getch();
  return 0;
  }