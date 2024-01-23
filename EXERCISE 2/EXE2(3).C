/* write a program to calculate velocity ,the distance travelled.
  velocity(u),acceleration(a),time(t)
  velocity=u+a*t,distance(s)=u+a*t*t.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int u,a,t;
 float s,v;
 clrscr();
 printf("\n enter enitial velocity,acceleration,time:");
 scanf("%d %d %d",&u,&a,&t);
 v=u+a*t;
 printf("\n final velocity:%f",v);
 s=u+a*t*t;
 printf("\n distance travelled:%f",s);
 getch();
 return 0;
 }