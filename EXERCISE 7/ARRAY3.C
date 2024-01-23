/* write a program to calculate all odd elements of 1d array*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i,a[10],sum=0;
 clrscr();
 printf("\n enter how many array elements:");
 scan("%d",&n);
 printf("\n enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("\n array elements is:");
  for(i=0;i<n;i++)
  {
   printf("%d",a[i]);
   if(a[i]%2!==0)
   sum=sum+a[i];
   }
   printf("\n sum of all odd elements of an array:%d",sum);
   getch();
   return 0;
   }