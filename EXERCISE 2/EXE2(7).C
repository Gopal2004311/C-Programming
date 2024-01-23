/* write a program to accept a charecter and display its ascii value */
#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("\n enter any charecter:");
 scanf("%c",&ch);
 printf("\n ascii value of %c is:%d",ch,ch);
 getch();
 return 0;
 }