/* write a program to calculate surface area and volume of cuboid.
   surface area=2(l*b+l*h+b*h),volume=l*b*h.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int l,b,h;
 float area,volume;
 clrscr();
 printf("\n enter length,breadth,height:");
 scanf("%d %d %d",&l,&b,&h);
 area=2*(l*b+l*h+b*h);
 printf("\n area of a cuboid:%f",area);
 volume=l*b*h;
 printf("\n volume of a cuboid:%f",volume);
 getch();
 return 0;
 }