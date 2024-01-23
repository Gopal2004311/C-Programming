// write a program to check whether a input number is palindrome or not
#include<stdio.h>
#include<conio.h>
int main()
{
  int n,d,num,rev=0;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&n);
  num=n;
  while(n>0)
  {
   d=n%10;
   rev=rev*10+d;
   n=n/10;
   }
    if(num==rev)
    printf("\n %d number is pelindrome",num);
    else
    printf("\n %d number is not a pelindrome",num);
    getch();
    return 0;
    }