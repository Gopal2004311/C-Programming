/* write a program to display all armstrong number between 1 to 1000 */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,d,sum=0,n;
 clrscr();
 for(i=1;i<=1000;i++)
 n=i;
 {
  while(i>0)
  {
   d=i%10;
   sum=sum+(d*d*d);
   i=i/10;
   }
   if(sum==n)
   printf("\n %d",i);
   }
   getch();
   return 0;
   }