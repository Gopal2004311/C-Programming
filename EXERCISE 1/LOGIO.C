// write a c program using logical operator find max of two  no
#include <stdio.h>
#include<conio.h>
 int main()
{
   int a,b,c;
   clrscr();
   printf("\n enter three numbers:");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
   printf("\n maximum no is %d",a);
   if(b>a&&b>c)
   printf("\n maximum no is %d",b);
   if(c>a&&c>b);
   printf("\n maximum no is %d",c);
   getch();
   return 0;
}