#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int,int,int,int);
void main(){

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\TURBOC3\BGI");
	rectangle(100,100,200,200);
	flood(101,101,GREEN,0);
	getch();
	closegraph();
}
void flood(int x,int y,int new_col,int old_col)
{
if(x>100 && x<200 && y>100 && y<200)
{
 if (getpixel(x, y) == old_col)
  {
	putpixel(x, y, new_col);
	delay(2);
	flood(x + 1, y, new_col, old_col);
	flood(x - 1, y, new_col, old_col);
	flood(x, y + 1, new_col, old_col);
	flood(x, y - 1, new_col, old_col);
	}
 }
}