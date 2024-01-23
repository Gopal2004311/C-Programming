/* write a program to accept a number and count even,odd and zero digit
  within that number */
#include<stdio.h>
#include<conio.h>
int main()
{
 int d,ecnt=0,zcnt=0,ocnt=0,n;
 clrscr();
 printf("\n enter any number:");
 scanf("%d",&n);
 while(n>0)
 {
  d=n%10;
  if(d==0)
   {
    zcnt++;
   }
   if(d%2==0&&d!=0)
   {
    ecnt++;
    }
    if(d%2!=0)
    {
      ocnt++;
      }
      n=n/10;
      }
   printf("\n total even no.:%d \n total odd no.:%d \n total zero is:%d",ecnt,ocnt,zcnt);
      getch();
      return 0;
      }