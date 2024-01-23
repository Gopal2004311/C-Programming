/* accept the x and y coordinates of two points and compute
   distance between two points
   distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int x1,x2,y1,y2;
 float d;
 clrscr();
 printf("\n enter coordinates of first point:");
 scanf("%d %d",&x1,&y1);
 printf("\n enter coordinates of second point:");
 scanf("%d %d",&x2,&y2);
 d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 printf("\n distance between two co-ordiantes points:%f",d);
 getch();
 return 0;
 }