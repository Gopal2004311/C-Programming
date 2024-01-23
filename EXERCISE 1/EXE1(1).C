/* write a c program to working of arithmatic operators*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,ans;
 clrscr();
 printf("\n enter two numbers:");
 scanf("%d %d",&a,&b);
 ans=a+b;
 printf("\n addition of two no.:%d",ans);
 ans=a-b;
 printf("\n subtraction of two no.:%d",ans);
 ans=a*b;
 printf("\n multiplication of two numbers:%d",ans);
 ans=a/b;
 printf("\n division of two numbers:%d",ans);
 ans=a%b;
 printf("\n division after reminder:%d",ans);
 getch();
 return 0;
 }