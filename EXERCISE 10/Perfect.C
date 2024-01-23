/* write a program to check no is perfect or not using function */
#include <stdio.h>
#include <conio.h>
int perfect(int n)
{
   int i, sum = 0;
   for (i = 1; i < n; i++)
   {
      if (n % i == 0)
         sum = sum + i;
   }
   if (n == sum)
      return 1;
   else
      return 0;
}
int main()
{
   int num;
   printf("\n enter any number:");
   scanf("%d", &num);
   perfect(num);
   if (perfect(num))
      printf("\n %d number is perfect", num);
   else
      printf("\n %d number is not perfect", num);
   getch();
   return 0;
}
