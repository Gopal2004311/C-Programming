//accept a charecter from the user and check its a vowel or consonent
#include<stdio.h>
#include<conio.h>
 int main()
{
  char ch;
  clrscr();
  printf("\n enter any charecter:");
  scanf("%c",&ch);
  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   printf("\n charecter %c is a vowel");
  else
    printf("\n charecter %c is a consonent");
   getch();
   return 0;
   }