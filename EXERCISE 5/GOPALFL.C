// write a program to calculate sum of first and last digit of given number
#include<stdio.h>
#include<conio.h>
int main()
{
 int n,fdigit,ldigit,sum;
 clrscr();
 printf("\n enter any number:");
 scanf("%d",&n);
 ldigit=n%10;
 while(n>=10)
 {
   n=n/10;
   }
   fdigit=n;
   sum=fdigit+ldigit;
   printf("\n addition of first %d and last %d digit of given number:%d",fdigit,ldigit,sum);
   getch();
   return 0;
   }