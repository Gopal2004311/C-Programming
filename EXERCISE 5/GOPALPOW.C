// write a program to calculate x squer y
#include<stdio.h>
#include<conio.h>
int main()
{
  int x,y,i,pow=1;
  clrscr();
  printf("\n enter base and power value:");
  scanf("%d %d",&x,&y);
  i=1;
  while(i<=y)
  {
    pow=pow*x;
    i++;
    }
    printf("\n result:%d",pow);
    getch();
    return 0;
    }