/* write a program to connect to strings without using standard functions */
#include<stdio.h>
#include<conio.h>
int main()
{
 char a[50],b[50];
 int i,j;
 clrscr();
 printf("\n enter first string:");
 gets(a);
 printf("\n enter second string:");
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
 for(j=0;b[j]!='\0';j++)
 {
  a[i]=b[j];
  }
  }
  printf("\n concatenation string is:%s",a);
 getch();
 return 0;
 }
