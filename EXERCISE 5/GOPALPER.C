#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,sum=0;
 clrscr();
 printf("\n enter anter any number:");
 scanf("%d",&n);

 for(i=1;i<=n-1;i++);
 {
   if(n%i==0)

      sum=sum+i;
      }
      if(sum==n)
      printf("\n %d number is perfect",n);
      else
      printf("\n %d number is not perfect",n);
      getch();
      return 0;
      }
