/* write a program to accept a charecter and display the next n charecter */
#include<stdio.h>
#include<conio.h>
void charecter(int n,char ch)
{
 int i;
 for(i=ch;i<=n;i++)
 {
  printf("\t %c",ch);
  }
 }
 int main()
 {
  int num;
  char c;
  printf("\n enter which number of next charecter:");
  scanf("%d",&num);
  printf("\n enter a single charecter:");
  scanf("%c",&c);
  charecter(num,c);
  getch();
  return 0;
  }