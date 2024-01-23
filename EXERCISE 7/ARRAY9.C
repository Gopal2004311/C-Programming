/* write  a program to count the occurances of a input number in array*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a[10],n,n1,cnt;
 clrscr();
 printf("\n enter how many array elements :");
 scanf("%d",&n);
 printf("\n enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
 printf("\n array elements is:");
 for(i=0;i<n;i++)
 {
  printf("\t %d",a[i]);
  }
  printf("\n enter any number:");
  scanf("%d",&n1);
  for(i=0;i<n;i++)
  {
   if(a[i]==n1)
   cnt++;
   }
   printf("\n occurances of given number if an array:%d",cnt);
   getch();
   return 0;
   }
