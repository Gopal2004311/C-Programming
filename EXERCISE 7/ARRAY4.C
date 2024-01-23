/* write a program to sort array elements in acsinding order */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10],i,n,temp,min;
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
   printf("\t %d",a[i]);
   }
   min=1;
   printf("\n array elements in ascending order:");
   for(i=0;i<n;i++)
   {
    if(a[i]<min)
    min=a[i];
    temp=min;
    a[i]=temp;
    printf("\t %d",a[i]);
    }
    getch();
    return 0;
    }

