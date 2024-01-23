//write a c program using bitwise left shift and right shift.
#include<stdio.h>
#include<conio.h>
 int main()
{
  int a,b;

  printf("\n enter any number:");
  scanf("%d %d",&a,&b);
  a>>=3;
  printf("\n after right shift value of a=%d",a);
  a<<=4;
  printf("\n after left shift value of a=%d",a);
  b>>=5;
  printf("\n after right shift value of b=%d",b);
  b<<=4;
  printf("\n after left shift value of b=%d",b);
  getch();
  return 0;
}