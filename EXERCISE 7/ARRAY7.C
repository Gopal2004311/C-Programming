/* write a program to display 1d array in reverse order */
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a[10],n;
 clrscr();
 printf("\n enter how many array elements:");
 scanf("%d",&n);
 printf("\n enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("\n array elements is:\n");
  for(i=0;i<n;i++)
  {
   printf("\t %d",a[i]);
   }
   printf("\n reverse array elements is:\n");
   for(i=n-1;i>=0;i--)
   {
    printf("\t %d",a[i]);
    }
    getch();
    return 0;
    }