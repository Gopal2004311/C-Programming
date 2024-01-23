// write a c program to check given charecter is a digit or lower case alphabate ,uppercase alphabate
#include<stdio.h>
#include<conio.h>
 int main()
 {
   char ch;
   clrscr();
   printf("\n enter any charecter:");
   scanf("%c",&ch);
   if(ch>=48&&ch<=58)
   printf("\n inpute charecter %c is a digit",ch);
   if(ch>=97&&ch<=122)
   printf("\n inpute charecter %c is a lowercase alphabate",ch);
   if(ch>=65&&ch<=90)
   printf("\n inpute charecter %c is a uppercase alphabate",ch);
   getch();
   return 0;
   }