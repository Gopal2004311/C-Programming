// accept temperature in faherenheit and print it in celsius and kelvin .
#include<stdio.h>
#include<conio.h>
 int main()
 {
   float f,c,k;
   clrscr();
   printf("\n temperature in feherenheit:");
   scanf("%f %f %f",&f,&c,&k);
   c=5.0/9* f-32;
   printf("\n temperature in celcius:%f",c);
   k=c+273.15;
   printf("\n temperature in kelvin:%f",k);
   getch();
   return 0;
 }
