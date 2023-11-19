#include<stdio.h>
#include<conio.h>
#include <graphics.h>
void bfill (int x, int y, int f, int b)
{
if ((getpixel(x,y)!=f) && (getpixel(x,y)!=b))
{
putpixel(x,y,f);
bfill (x+1,y,f,b);
bfill (x,y+1,f,b);
bfill (x-1,y,f,b);
bfill (x,y-1,f,b);
bfill (x-1,y-1,f,b);
bfill (x-1,y+1,f,b);
bfill (x+1,y-1,f,b);
bfill (x+1,y+1,f,b);
}
}
void main()
{
int gd=DETECT,gm,x,y,f,b;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(100,100,50,50);
bfill (55,55,10,15);
getch();
closegraph();
}