/* write a program to calculate to which currancy note to give for given ammount
  currency note is 1,5,10. */
#include<stdio.h>
#include<conio.h>
int main()
{
 int amt,one,five,ten;
 clrscr();
 printf("\n enter the amount to be withdrawn:");
 scanf("%d",&amt);
 ten=amt/10;
 amt=amt%10;
 five=amt/5;
 one=amt%5;
 printf("\n total number of currancy notes are:");
 printf("\n ten=%d \n five=%d \n one=%d",ten,five,one);
 getch();
 return 0;
 }