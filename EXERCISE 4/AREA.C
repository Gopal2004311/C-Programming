// write a c program to accept redius and displey the options
#include<stdio.h>
#include<conio.h>
  int main()
  {
    float r,vol,area,res;
    char ch;
    clrscr();
    printf("\n enter any number:");scanf("%f",&r);
    printf("\n.................");
    printf("\n 1.area of circle \n 2.circumference of circle \n 3.volume of sphere");
    printf("\n ................");
    printf("\n enter your choice");
    scanf("%c",&ch);
   switch(ch)
   {
     case 1 : area=3.14*r*r;
	     printf("\n area of circle=%f",area);
	     break;
     case 2 :res=2*3.14*r;
	     printf("\n circumference of circle=%f",res);
	     break;
     case 3 :vol=4/3*3.14*r*r*r;
	    printf("\n volume of sphere=%f",vol);
	    break;
   default :printf("\n wrong inpute");
	    }
	    getch();
	    return 0;
	    }