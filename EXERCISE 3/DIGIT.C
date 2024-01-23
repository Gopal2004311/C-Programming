// write a c program to check whether charecter is digit
#include<stdio.h>
#include<conio.h>
 int main()
{
  char ch;
  clrscr();
  printf("\n enter any charecter");
  scanf("%c",&ch);
  if(ch>='0'&&ch<='9')
    printf("\n whether charecter %c is a digit");
  else
    printf("\n whether charecter %c is not a digit");
 getch();
 return 0;
 }