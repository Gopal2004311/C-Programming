// write a c program using two variable display quotetion and reminder after
  //division
#include<stdio.h>
#include<conio.h>
 int main()
{
  int a ,b,res;
  clrscr();
  printf("\n enter two no.");
  scanf("%d %d", &a, &b);
  res=a/b;
  printf("\n quotient of no=%d",res);
  res=a%b;
  printf("\n reminder after division=%d",res);
  getch();
  return 0;
}