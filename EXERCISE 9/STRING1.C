/* write a program to perform following operation on using standard library function
 1.length 2.copy 3.concatenation 4.compare */
#include<stdio.h>
#include<conio.h>
int main()
{
 char str1[100],str2[100],blank[]=" ";
 int choice,len1,len2;
 clrscr();
 printf("\n enter first string:");
 gets(str1);
 printf("\n next string:");
 gets(str2);
 printf("\n 1.length \t 2.copy \t 3.concatenation \t 4.compare \n");
 printf("\n enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1 : len1=strlen(str1);
	   printf("\n first string kength is:%d",len1);
	   len2=strlen(str2);
	   printf("\n next string length is:%d",len2);
	   break;
  case 2 : strcpy(str2,str1);
	   break;
  case 3 : strcat(str1,blank);
	   strcat(str1,str2);
	   break;
  case 4 : strcmp(str1,str2);
	   if(strlen(str1)==strlen(str2))
	    printf("\n strings are same");
	    else if(strlen(str1)>strlen(str2))
		 printf("\n first string is greater");
		 else
		 printf("\n next string is greater");
	    break;
  default : printf("\n wrong input");
  getch();
  return 0;
  }
