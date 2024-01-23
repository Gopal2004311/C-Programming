/* write a program to calculate sum of following series up to n terms */
#include<stdio.h>
#include<conio.h>
int main()
{
 int n,sum=0,pow=1,j,i;
 clrscr();
 printf("\n enter any number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)      //i=1;i<=5;i++
 {
 for(j=i;j<=j;j++)      // j=i;j<=j;j++
 {
  pow=pow*j/j;
  sum=sum+pow;
  }
 }
  printf("\n sum of the series:%d",sum);
  getch();
  return 0;
  }

