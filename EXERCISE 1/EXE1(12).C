/* write a program to flip the bits of a binary no using bitwise operator */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a;
 clrscr();
 printf("\n enter any number:");
 scanf("%d",&a);
 printf("\n after fliping the bits number is:%d",~a);
 getch();
 return 0;
 }