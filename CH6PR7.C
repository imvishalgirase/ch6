#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z,xy;
    clrscr();
    x=3;
    y=6;
    z=2;
    xy=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
    printf("(x+y+z)^2=%d",xy);
    getch();
    }