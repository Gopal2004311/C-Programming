/* write a program to count prime number from 1d array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50],i,cnt=0,n,flag=0,j;
 clrscr();
 printf("\n enter how many elements in array:");
 scanf("%d",&n);
 printf("\n enter array elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
 printf("\n array is:\n");
 for(i=0;i<n;i++)
 {
  printf("\t %d",a[i]);
  }
 for(i=0;i<n;i++)
 {
  flag=0;
  for(j=2;j<i;j++)
  {
   if(a[i]%j==0)
   flag=1;
   }
   if(flag==0)
   cnt++;
   }
  printf("\n prime number of 1d array is:%d",cnt);
  getch();
  return 0;
  }

