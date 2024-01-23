/* write a program to accept a character and print previous and next charecter */
#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("\n enter any character:");
 scanf("%c",&ch);
 printf("\n previous character is:%c",ch-1);
 printf("\n next character is :%c",ch+1);
 getch();
 return 0;
 }