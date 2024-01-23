/* write a program to check number is prime or not and display first 10
 prime numbers */
#include<stdio.h>
#include<conio.h>
int isPrime(int n)
{
 int i;
 for(i=2;i<n;i++);
 {
  if(n%i==0)
  break;
   }
   if(i==n)
   return 1;
   else
   return 0;
   }
 void main()
 {
  int num;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&num);
  isPrime(num);
  if(isPrime(num)==1)
  printf("\n %d number is prime",num);
  else
  printf("\n %d number is not prime",num);
   getch();
  }

