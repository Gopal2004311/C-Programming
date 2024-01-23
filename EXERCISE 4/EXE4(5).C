/* write a program to perform following operations
  1.area of square 2.area of rectangle 3.area of triangle */
#include<stdio.h>
#include<conio.h>
int main()
{
 int l,b,h,base,choice;
 float area;
 clrscr();
 printf("\n 1.area of square \n 2.area of rectangle \n 3.area of triangle");
 printf("\n enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1 : printf("\n enter length of square:");
	   scanf("%d",&l);
	   area=l*l;
	   printf("\n area of square :%f",area);
	   break;
  case 2 : printf("\n enter length and breadth of rectangle:");
	   scanf("%d %d",&l,&b);
	   area=l*b;
	   printf("\n area of rectangle:%f",area);
	   break;
  case 3 : printf("\n enter base and height of triangle:");
	   scanf("%d %d",&base,&h);
	   area=1/2*base*h;
	   printf("\n area of triangle:%f",area);
	   break;
  default : printf("\n enter choice is wrong");
  }
  getch();
  return 0;
  }
