// write a program to display multiplication of two input numbers without using * operator.
#include<stdio.h>
#include<conio.h>
int main()
{
 int n1,n2,mult=0,i;
 clrscr();
 printf("\n enter two numbers for multiplication:");
 scanf("%d %d",&n1,&n2);

 i=1;
 while(i<=n2)
 {
  mult=mult+n1;
  i++;
  }
  printf("\n multiplication of two numbers without using * operator:%d",mult);
  getch();
  return 0;
  }