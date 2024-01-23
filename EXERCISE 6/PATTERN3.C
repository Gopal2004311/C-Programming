/* write a program to display following pattern
  A B C
  D E
  F    */
#include <stdio.h>
#include <conio.h>
int main()
{
  int j, i;
  char ch;
  ch = 'A';
  for (i = 3; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("\t %c", ch);
      ch++;
    }
    printf("\n");
  }
  getch();
  return 0;
}