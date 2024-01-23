/*write a menu driven program to perform the following operatons
 on strings using standard library function
 1.length 2.copy 3.concatenation 4.compare */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

 char str1[100],str2[100],blank[]=" ";
 int len1,len2;
 clrscr();
 printf("\n enter any string:");
 gets(str1);
 printf("\n enter next string:");
 gets(str2);
 len1=strlen(str1);
 len2=strlen(str2);
 printf("\n length of first string is:%d",len1);
 printf("\n length of next string is:%d",len2);

 strcpy(str2,str1);
 puts(str2);
 strcat(str1,blank);
 strcat(str1,str2);
 puts(str1);

 strcmp(str1,str2);
 if(str1==str2)
 printf("\n strings are same");
 else if(str1>str2)
       printf("\n str1 is greater");
       else
       printf("\n str2 is greater");
 getch();
 return 0;
 }
