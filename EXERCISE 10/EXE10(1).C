/* write a program to check no is even or odd using user defined function
   if the no is even then return 1 otherwise return 0 */
#include<stdio.h>
#include<conio.h>
void isEven(int num)
{
 if(num%2==0)
 printf("\n %d number is even");
 else
 printf("\n %d number is odd");
 }
 int main()
 {
  int num;
  printf("\n enter any number:");
  scanf("%d",&num);
  isEven(num);
  getch();
  return 0;
  }