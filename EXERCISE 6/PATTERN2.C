/* write a program to display following pattern
  1
  2 3
  4 5 6 */
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,a,n;
  clrscr();
  printf("\n enter number of rows:");
  scanf("%d",&n);
  a=1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
     printf("\t %d",a);
     a++;
     }
     printf("\n");
     }
     getch();
     return 0;
     }