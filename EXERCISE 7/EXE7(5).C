/* write a program to find union of two 1d arrays */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10],b[10],c[20],i,j,n1,n2,n3=0,found;
 clrscr();
 printf("\n enter how many array elements in first array:");
 scanf("%d",&n1);
 printf("\n enter how many array elements in second array:");
 scanf("%d",&n2);
 printf("\n enter first array elements:");
 for(i=0;i<n1;i++);
 {
  scanf("%d",&a[i]);
  }
 printf("\n enter second array elements:");
 for(j=0;j<n2;j++)
 {
  scanf("%d",&b[j]);
  }
 printf("\n first array is:");
 for(i=0;i<n1;i++)
 {
  printf("\t %d",a[i]);
  }
 printf("\n second array is:");
 for(j=0;j<n2;j++)
 {
  printf("\t %d",b[j]);
  }

 for(i=0;i<n1;i++)
 {
  c[i]=a[i];
  }
 n3=n1;
 for(j=0;j<n2;j++)
 {
   found=0;
  for(i=0;i<n1&&!found;i++)
  {
   if(a[i]==b[j])
   found=1;
   }
    if(!found)
    c[n3++]=b[j];
    }
   printf("\n union of two 1d array:\n");
   for(i=0;i<n3;i++)
   {
    printf("\t %d",c[i]);
    }
    getch();
    return 0;
    }