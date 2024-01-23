/* write a program to find factorial of input number using function */
#include<stdio.h>
#include<conio.h>
void fact(int n)
{
 int i,fact=1;
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
  }
  printf("\n factorial of input number:%d",fact);
  }
 int main()
 {
  int num;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&num);
  fact(num);
  getch();
  return 0;
  }
