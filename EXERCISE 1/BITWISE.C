EXERCISE 1:
1.
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,res;
clrscr();
printf("\n Enter 2 number:");
scanf("%d%d",&a,&b);
res=a&b;
printf("\n a&b=%d",res);
res=a|b;
printf("\n a|b=%d",res);
res=a^b;
printf("\n a^b=%d",res);
getch();
return 0;
}
OUTPUT:
Enter 2 number: 2 4
a&b=
a|b=
a^b=

2.
// write a c program check number is even or odd
#include<stdio.h>
#include<conio.h>
 int main()
{
  int n;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&n);
  if("n&1")
   printf("\n number is odd(1)=%d",n);
  else
   printf("\n number is even(0)=%d",n);
  getch();
  return 0;
}
Output:
Enter any number: 4
Number is even(0)

3.
// write a c program to flip the bits using bitwise operator.
#include<stdio.h>
#include<conio.h>
 int main()
{
  int a,b;
  clrscr();
  printf("\n enter two numbers:");
  scanf("%d %d",&a,&b);
  printf("\n before swapping value of %d and %d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\n after swapping value of %d and %d",a,b);
  getch();
  return 0;
}
Output:
Enter two numbers: 2 4
Before swapping value of 2 and 4
After swapping value of 4 and 2

4.
// write a c program top check lsb of a number is set or unset.
#include<stdio.h>
#include<conio.h>
 int main()
{
   int n;
   clrscr();
   printf("\n enter any number:");
   scanf("%d",&n);
   if(n&1)
    printf("\n lsb of %d is set  (1)");
   else
    printf("\n lsb of %d is unset(0)");
   getch();
   return 0;
}
Output:
Enter any number:3
Lsb of 3 is set

5.
#include<stdio.h>
#include<conio.h>
#define BITS sizeof(int)*8
int main()
{
  int num ,msb;
  clrscr();
  printf("\n Enter any number.....");
  scanf("%d ", &num);
  msb=1<<(BITS-1);
  if(num&msb)
   printf("\n msb of %d is set (1)",num);
  else
   printf("\n msb of %d is unset (0)",num);
   getch();
   return 0;
  }

Output:
Enter any number……3
Msb of 3 is unset

6.
//write a c program using bitwise left shift and right shift.
#include<stdio.h>
#include<conio.h>
 int main()
{
  int a,b;
  clrscr();
  printf("\n enter any number:");
  scanf("%d %d",&a,&b);
  a>>=3;
  printf("\n after right shift value of a=%d",a);
  a<<=4;
  printf("\n after left shift value of a=%d",a);
  b>>=5;
  printf("\n after right shift value of b=%d",b);
  b<<=4;
  printf("\n after left shift value of b=%d",b);
  getch();
  return 0;
}

Output:
Enter any number: 4 6
After right shift value of a=
After left shift value of a=
After right shift value of b=
After left shift value of b=

