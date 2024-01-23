// write a c program top check lsb of a number is set or unset.
#include<stdio.h>
#include<conio.h>
 int main()
{
   int n;
   clrscr();
   printf("\n enter any number:");
   scanf("%d",&n);
   if(n&1)
    printf("\n lsb of %d is set  (1)");
   else
    printf("\n lsb of %d is unset(0)");
   getch();
   return 0;
}