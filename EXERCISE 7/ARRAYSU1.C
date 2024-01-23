/* write a c program to accept n elements of an array and display sum of array elements*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[10],sum=0,i,n;
  clrscr();
  printf("\n enter how many array elements you want to required:");
  scanf("%d",&n);
  printf("\n enter array elemnts:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    }
  printf("\n array elements is:");
  for(i=0;i<n;i++)
  {
    printf("\t %d",a[i]);
    sum=sum+a[i];
    }
    printf("\n sum of all array elements:%d",sum);
    getch();
    return 0;
    }