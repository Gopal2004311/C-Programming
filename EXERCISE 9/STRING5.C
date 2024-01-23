/* write a program to calculate length of string without
   using standard library function */
#include<stdio.h>
#include<conio.h>
int main()
{
 char a[100];
 int i,cnt;
 clrscr();
 printf("\n enter any string:");
 gets(a);
 for(i=0;i<'\0';i++)
 {
  cnt++;
  }
  printf("\n length of string is:%d",cnt);
  getch();
  return 0;
  }