/* write a program to calculate x power y using user defined function */
#include<stdio.h>
#include<conio.h>
void power(int x ,int y)
{
 int i,mult=1;
 for(i=1;i<=y;i++)
 {
  mult=mult*x;
  }
  printf("\n multiplication of %d is %d times:%d",x,y,mult);
 }
 void main()
 {
  int base,pow;
  clrscr();
  printf("\n enter base and power value:");
  scanf("%d %d",&base,&pow);
  power(base,pow);
  getch();
  }