// write a c program accept the salery from the employee and calculete the income tax
#include<stdio.h>
#include<conio.h>
 int main()
{
  float bsl,tax;
  clrscr();
  printf("\n enter a basic salery for employee");
  scanf("%f",&bsl);
  if(bsl<150000)
  tax=0;
  if(bsl>=150000&&bsl<=300000)
  tax=bsl*20/100;
  if(bsl>300000)
  tax=bsl*30/100;
  printf("\n incame tax=%f",tax);
  getch();
  return 0;
  }