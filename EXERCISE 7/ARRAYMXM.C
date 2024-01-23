/* write a program to find max and min array elements */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10],i,n,max,min;
 clrscr();
 printf("\n enter how many array elements:");
 scanf("%d",&n);
 printf("\n enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("\n array elements is:");
  for(i=0;i<n;i++)
  {
    printf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
      if(a[i]>max)
      max=a[i];
      }
      min=0;
      for(i=0;i<n;i++)
      {
       if(a[i]<min)
       min=a[i];
       }
       printf("\n smallest array element is:%d",min);
       printf("\n largest array element is:%d",max);
       getch();
       return 0;
       }