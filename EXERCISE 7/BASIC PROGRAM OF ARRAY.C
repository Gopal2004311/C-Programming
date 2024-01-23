#include<stdio.h>
#include<conio.h>
int main()
{
 int a[20],i,n;
 clrscr();
 printf("\n enter how many array elements you want in array:");
 scanf("%d",&n);
 printf("\n enter array elements:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\n display array:");
 for(i=0;i<n;i++)
 printf("\t %d",a[i]);
 getch();
 return 0;
 }