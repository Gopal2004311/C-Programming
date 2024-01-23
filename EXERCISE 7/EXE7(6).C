/* write a program to display intersection of two 1d array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[50],b[50],c[50],k,i,j,n1,n2,n3;
 clrscr();
 printf("\n enter how many first array elements:");
 scanf("%d",&n1);
 printf("\n enter first array elements:");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&a[i]);
  }
 printf("\n first array is:");
 for(i=0;i<n1;i++)
 {
  printf("\t %d",a[i]);
  }
 printf("\n enter how many second array elements:");
 scanf("%d",&n2);
 printf("\n enter second array elements:");
 for(j=0;j<n2;j++)
 {
  scanf("%d",&b[j]);
  }
 printf("\n second array is:");
 for(j=0;j<n2;j++)
 {
 printf("\t %d",b[j]);
 }
 printf("\n intersection array is:");
 for(i=0;i<n1;i++)
 {
  for(j=0;j<n2;j++)
  {
   if(a[i]==b[j])
   printf("\t %d",a[i]);
   }
  }
  getch();
  return 0;
  }

