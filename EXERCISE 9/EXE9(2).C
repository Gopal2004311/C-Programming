/* write a program to accept a string and convert space into *,case of alphabate
 is reversed,digit replaced by ? */
#include<stdio.h>
#include<conio.h>
int main()
{
 char str[100],i;
 clrscr();
 printf("\n enter any string:");
 gets(str);
 for(i=0;i<'\0';i++)
 {
  if(str[i]==" ")
  {
   str[i]="*";
   }
   if(islower(str[i]))
   {
  str[i]=toupper(str[i])
  }
  if(isupper(str[i]))
   {
    str[i]=tolower(str[i])
    }
    if(isdigit(str[i]))
    {
     str[i]="?";
     }
     }
     printf("\n replaced srting is:%s",str);
     getch();
     return 0;
     }