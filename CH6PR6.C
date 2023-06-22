#include<stdio.h>
#include<conio.h>
void main()
{

  int x=4,y=5,xy,z=6;
  clrscr();
  xy=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x)));


  printf("(x-y-z)^3=%d",xy);
  getch();
  }