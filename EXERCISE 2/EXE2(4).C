/* write a program to calculate arithmatic and harmonic mean of two no.
  A.M.=a+b/2,H.M=a*b/a+b .*/
#include<stdio.h>
#include<conio.h>
int main()
{
 float am,hm;
 int a,b;
 clrscr();
 printf("\n enter two numbers:");
 scanf("%d %d",&a,&b);
 am=a+b/2;
 printf("\n arithmatic mean of two numbers:%f",am);
 hm=a*b/a+b;
 printf("\n harmonic mean of two numbers:%f",hm);
 getch();
 return 0;
 }
