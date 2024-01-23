/* write a program to copy string without using library function */
#include<stdio.h>
#include<conio.h>
int main()
{
 char a[100],b[100];
 int i;
 clrscr();
 printf("\n enter any string:");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
     a[i]=b[i];
     }

  printf("\n copied string is:%s",b);
  getch();
  return 0;
  }