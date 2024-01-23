/* write a program to calculate sum of each row and cols of matrix */
#include <stdio.h>
#include <conio.h>
int main()
{
  int a[10][10], i, j, rows, cols, sum = 0;
  clrscr();
  printf("\n enter rows and cols:");
  scanf("%d %d", &rows, &cols);
  printf("\n enter rows and cols:");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n matrix is:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      printf("\t %d", a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      sum = sum + a[i][j];
    }
    printf("\n sum of %d rows is:%d", i, sum);
    sum = 0;
  }
  for (j = 0; j < cols; j++)
  {
    for (i = 0; i < rows; i++)
    {
      sum = sum + a[i][j];
    }
    printf("\n sum of %d cols is:%d", j, sum);
    sum = 0;
  }
  getch();
  return 0;
}