// write a c program to accept two integer and perform corresponding operations and displayed result
#include<stdio.h>
#include<conio.h>
  int main ()
  {
     int a,b,res;clrscr();
     char ch;
     printf("\n +=addition \n -=subtraction \n *=multiplication \n /=division \n %=division after reminder");
     printf("\n -------------");
     printf("\n enter two numbers:");
     scanf("%d %d",&a,&b);
     printf("\n enter your choice:");
     scanf("%c",&ch);
     switch(ch)
     {
	case '+' :res=a+b;
		printf("\n addition :%d",res);
		break;
       case '-' :res=a-b;
	       printf("\n subtraction :%d",res);
	       break;
      case '*' :res=a*b;
	      printf("\n multiplication:%d",res);
	      break;
     case '/' :res=a/b;
	     printf("\n division:%d",res);
	     break;
     case '%' :res=a%b;
	    printf("\n modules after reminder:%d",res);
	    break;
	    }
	    getch();
	    return 0;
	    }
