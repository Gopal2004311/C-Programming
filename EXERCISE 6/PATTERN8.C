/* write a program to calculate sum of all
  digit of input number till it reduse to a single digit */
#include<stdio.h>
#include<conio.h>
int main()
{
 int n,sum=0,d;
 clrscr();
 printf("\n enter input number:");
 scanf("%d",&n);
 while(n>0)
 {
   d=n%10;
   sum=sum+d;
   if(n>=10)
   n=n/10;
   }
   printf("\n sum of digit within a single digit:",sum);
   getch();
   return 0;
   }
