/* write a program to count vowel of string */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char a[100];
 int i,cnt;
 clrscr();
 printf("\n enter any string: ");
 gets(a);
 for(i=0;i<'\0';i++)
 {
  if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='U'||a[i]=='u')
   cnt++;
   }
   printf("\n occurances of vowel is:%d",cnt);
   getch();
   return 0;
   }
