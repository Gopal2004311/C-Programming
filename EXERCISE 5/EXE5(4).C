/* write a program to accept a binary number and convert it into decimal */
#include<stdio.h>
#include<conio.h>
int main()
{
 int base=1,n,dec=0,d;
 clrscr();
 printf("\n enter any binary number:");
 scanf("%d",&n);
 while(n)
 {
  d=n%10;
  n=n/10;
  dec=dec+d*base;
  base=base*2;
  }
  printf("\n decimal number of %d is:%d",n,dec);
  getch();
  return 0;
  }