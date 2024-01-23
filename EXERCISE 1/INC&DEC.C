// write a c program which illustration incre&decre operAtor
#include<stdio.h>
#include<conio.h>
int main()
 {
   int a,b,res;
   clrscr();
   printf("\n enter two numbers:");
   scanf("%d %d",&a,&b);
   res=(++a - --b);
   printf("\n subtraction of no=%d",res);
   ++a;
   printf("\n pre incremented value of a=%d",a);
   ++b;
   printf("\n pre incremented value of b=%d",b);
   res=++b+--a;
   printf("\n addition of no=%d",res);
   res=++a-b++;
   printf("\n subtraction of no=%d",res);
   getch();
   return 0;
}