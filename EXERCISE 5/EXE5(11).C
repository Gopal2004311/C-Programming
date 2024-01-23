/* write a program to accept a number and display each digit in word */
#include<stdio.h>
#include<conio.h>
int main()
{
 int rev=0,n,d,num;
 clrscr();
 printf("\n enter any number:");
 scanf("%d",&n);
 while(n>0)
 {
  d=n%10;
  rev=rev*10+d;
  n=n/10;
  }
  num=rev;
  while(num>0)
  {
    d=num%10;
  switch(d)
  {
   case 1 : printf("\t ONE");
	    break;
   case 2 : printf("\t TWO");
	    break;
   case 3 : printf("\t THREE");
	    break;
   case 4 : printf("\t FOUR");
	    break;
   case 5 : printf("\t FIVE");
	    break;
   case 6 : printf("\t SIX");
	    break;
   case 7 : printf("\t SEVEN");
	    break;
   case 8 : printf("\t EIGHT");
	    break;
   case 9 : printf("\t NINE");
	    break;
   case 10 : printf("\t TEN");
	     break;
    default : printf("\n wrong input");
    }
     n=n/10;
     }
      getch();
      return 0;
      }