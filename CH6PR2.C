#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int x,y,xy;
   printf("give the value of x=");
   scanf("%d",&x);
   printf("give the value of y=");
   scanf("%d",&y);
   xy=(x*x)+(y*y)-(2*x*y);
   printf("xy=%d",xy);
   getch();
   }