// write a c program check number is even or odd
#include<stdio.h>
#include<conio.h>
 int main()
{
  int n;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&n);
  if("n&1")
   printf("\n number is odd(1)=%d",n);
  else
   printf("\n number is even(0)=%d",n);
  getch();
  return 0;
}
