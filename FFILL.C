#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void floodf(int x,int y,int n,int o){
if(getpixel(x,y)==o){
putpixel(x,y,n);
 floodf(x+1,y,n,o);
  floodf(x,y+1,n,o);
   floodf(x-1,y,n,o);
    floodf(x,y-1,n,o);
     floodf(x+1,y+1,n,o);
      floodf(x+1,y-1,n,o);
      floodf(x-1,y+1,n,o) ;
 floodf(x-1,y-1,n,o) ;
 }
 }

 void main(){
 int gd=DETECT,gm, x,y,n,o;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 rectangle(100,100,50,50);
 floodf(55,55,10,0);

 getch();
 closegraph();
 }
