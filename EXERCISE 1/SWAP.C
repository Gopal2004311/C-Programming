// write a c program bitwise operators using two variables
#include<stdio.h>
#include<conio.h>
  int main()
{
  int a,b;
  clrscr();
  printf("\n enter two numbers:");
  scanf("%d %d",&a,&b);
  printf("\n before swapping value of %d and %d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\n after swapping value of %d and %d",a,b);
 getch();
 return 0;
}