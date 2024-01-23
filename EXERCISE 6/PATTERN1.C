/* write a program to print a following pattern
  1
  1 2
  1 2 3 */
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
  clrscr();
  for(i=1;i<=3;i++)
  {
   for(j=1;j<=i;j++)
    {
      printf("\t %d",j);
      }
       printf("\n");
       }
       getch();
       return 0;
       }