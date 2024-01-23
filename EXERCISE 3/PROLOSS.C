// write a c program to find profit or loss
#include<stdio.h>
#include<conio.h>
 int main()
 {
  int  cp,sp,profit,loss;
   clrscr();
   printf("\n enter cost price and selling price");
   scanf("%d %d",&cp,&sp);
   if(cp<sp)
   {
     profit=sp-cp;
     printf("\n total profit made is %d",profit);
   }
     else
     {
       loss=cp-sp;
       printf("\n total loss made is %d",loss);
       }
	 getch();
	 return 0;
	 }
