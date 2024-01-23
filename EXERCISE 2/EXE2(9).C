/* write a program to display interchanged value of two integers */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,temp;
 clrscr();
 printf("\n enter two numbers:");
 scanf("%d %d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("\n inrchanged value of two numbers:%d %d",a,b);
 getch();
 return 0;
 }