// write a c program to accept x and y quadrent point to find the distence of two points
#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
   int x,y;
   clrscr();
   printf("\n enter co-ordinates point:");
   scanf("%d %d",&x,&y);
   if(x>0&&y>0)
    printf("\n point lies in 1st quadrent");
   if(x<0&&y>0)
     printf("\n point lies in 2nd quadrent");
   if(x<0&&y<0)
     printf("\n point lies in 3rd quadrent");
   if(x<0&&y<0)
    printf("\n point lies in 4th quadrent");
    getch();
    return 0;
    }