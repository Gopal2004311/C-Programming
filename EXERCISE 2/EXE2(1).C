/* write a program to calculate surface area and volume of a cylinder
  surface area=2*pi*r*h+2*pi*r*r.
  volume=pi*r*r*h. */
#include<stdio.h>
#include<conio.h>
int main()
{
 float area,volume;
 int pi,r,h;
 clrscr();
 pi=3.14;
 printf("\n enter radius and height of cylinder:");
 scanf("%d %d",&r,&h);
 area=2*pi*r*h+2*pi*r*r;
 printf("\n surface area of cylinder:%f",area);
 volume=pi*r*r*h;
 printf("\n volume of cylinder :%f",volume);
 getch();
 return 0;
 }