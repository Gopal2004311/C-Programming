// write a c program to display the size of different data type
#include<stdio.h>
#include<conio.h>
 int main()
{
   int a;
   float b;
   clrscr();
   printf("\n size of integer =%d bytes",sizeof(int));
   printf("\n size of float =%d bytes",sizeof(float));
   printf("\n size of double=%d bytes",sizeof(double));
   printf("\n size of char=%d bytes", sizeof(char));
   getch();
   return 0;
}