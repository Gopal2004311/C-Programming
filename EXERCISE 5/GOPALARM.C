#include<stdio.h>
#include<conio.h>
int main()
{
  int n,d,sum=0,num;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&n);
  num=n;
  while(n!=0)
  {
    d=n%10;
    sum+=d*d*d;
    n=n/10;
    }
    if(sum==num)
    printf("\n %d number is armstrong",num);
    else
    printf("\n %d number is not armstrong",num);
    getch();
    return 0;
    }