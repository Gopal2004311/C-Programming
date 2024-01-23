// accept two variables &perform operations
#include<stdio.h>
#include<conio.h>
  int main()
{
   int x,y,res;char choice;
   clrscr();
   printf("\n enter two numbers:");
   scanf("%d %d",&x,&y);
   printf("\n 1.equality \n 2.less than \n 3.quatient and reminder");
   printf("\n ................");
   printf("\n enter your choice:");
   scanf("%c",&choice);
   switch(choice)
   {
      case 1 : if(x==y)
	       printf("\n %d is equel to %d",x,y);
	       else
	       printf("\n %d is not equel to %d",x,y);
	       break;
      case 2 : if(x<y)
	      printf("\n %d is less than %d",x,y);
	      else
	       printf("\n %d is less than %d",y,x);
	       break;
      case 3 : res=x/y;
	      printf("\n quatient:%d",res);
	      res=x%y;
	      printf("\n reminder:%d",res);
	      break;
      default :printf("\n wrong inpute");
	      }
	      getch();
	      return 0;
	      }