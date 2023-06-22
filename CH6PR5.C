#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,z,xy ;
   clrscr();
   x=3;
   y=4;
   z=5;
 xy=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)(y+z)(z+x));
 printf("(x+y+z)^3=%d",xy);
 getch();
 }