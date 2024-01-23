/* write a program to count the specific charecter of a string */
#include<stdio.h>
#include<conio.h>
int main()
{
 char a[50],ch;
 int cnt=0,i;
 clrscr();
 printf("\n enter any string:");
 gets(a);
 printf("\n enter any charecter:");
 scanf("%c",&ch);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==ch)
  cnt++;
  }
 printf("\n the occurences of give charecter of a string:%d",cnt);
 getch();
 return 0;
 }
