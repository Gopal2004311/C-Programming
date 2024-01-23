/* write a program to accept two no and display mult table all numbers
  within that range*/
#include <stdio.h>
#include <conio.h>
int main()
{
  int i, j, n1, n2, ans;
  printf("\n enter two numbers as a range:");
  scanf("%d %d", &n1, &n2);
  for (i = n1; i <= n2; i++)
  {
    for (j = n1; j <= n2; j++)
    {
      ans = j * i;
      //printf("\t %d*%d=%d", j, i, ans);
      printf("\t%d",ans);
    }
    printf("\n");
  }
  getch();
  return 0;
}