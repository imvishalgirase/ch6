#include<stdio.h>
#include<conio.h>
void main()
{
 float x,y,formula;
 clrscr();
 printf("PLease enter the value of x=");
 scanf("%f",&x);
 printf("Please enter the value of y=");
 scanf("%f",&y);
 formula=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
 printf("(x+y)^3=%f",formula);
 getch();
 }