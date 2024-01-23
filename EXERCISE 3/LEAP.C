// write a c program to check the year is leap year or not
#include<stdio.h>
#include<conio.h>
 int main()
 {
   int y;
   clrscr();
   printf("\n enter any year");
   scanf("%d",&y);
   if(y%4==0&&y%100!=0)
    //(y%4==0)
   printf("\n %d is a leap year",y);
   else
    printf("\n %d is not a leap year",y);
    getch();
    return 0;
    }