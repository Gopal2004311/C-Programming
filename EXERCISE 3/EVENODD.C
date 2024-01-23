//write a c program to accept an integer and check if it is even or odd
#include<stdio.h>
#include<conio.h>
 int main()
{
  int n;
  clrscr();
  printf("\n enter any digit:");
  scanf("%d",&n);
  if(n%2==0)
   printf("\n number is even ");
  else
    printf("\n number is odd");
  getch();
  return 0;
  }