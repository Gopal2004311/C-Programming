#include<stdio.h>
#include<conio.h>
int main()
{
 int d,n,sum=0;
 clrscr();
 printf("\n enter a number:");
 scanf("%d",&n);
 while(n>0)
 {
   d=n%10;
   sum=sum+d;
   n=n/10;
   }
   printf("\n total of all digits:%d",sum);
   getch();
   return 0;
   }
