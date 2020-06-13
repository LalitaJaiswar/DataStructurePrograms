#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,m,x,y;
initgraph(&gd,&gm,"C:\\TC\\BGI");
x=0;
cout<<"Enter left cordinate:";
cin>>x1>>y1;
cout<<"Enter right cordinate:";
cin>>x2>>y2;
m=abs((y2-y2)/(x2-x1));
cout<<"Slope"<<m;
y=y1;
for(x=x1;x<=x2;x++)
{
putpixel(x,abs(y),RED);
y=y+m;
}
getch();
closegraph();
restorecrtmode();
}