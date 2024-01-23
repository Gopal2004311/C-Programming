#include<stdio.h>
#include<conio.h>
int main()
{
 int n1,n2,i,sum=0,d;
 clrscr();
 printf("\n enter range:");
 scanf("%d %d",&n1,&n2);
 i=n1;
 for(i=n1;i<=n2;i++)
 {
  sum=sum+i;
  }
  printf("\n total of that range:%d",sum);
  getch();
  return 0;
  }