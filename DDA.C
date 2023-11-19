#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main(){

int x,y,x1,y1,x2,y2,dx,dy,xinc,yinc,step,i,gd=DETECT,gm;

clrscr();

initgraph(&gd,&gm,"C://TURBOC3//BGI");

printf("Enter the starting co-ordinates:");
scanf("%d%d",&x1,&y1);
printf("Enter the ing co-oendrdinates:");
scanf("%d%d",&x2,&y2);

dx=x2-x1;
dy=y2-y1;

if(abs(x)>=abs(y)){
step=abs(dx);
}
else{
step=abs(dy);
}

xinc=dx/step;
yinc=dy/step;

x=x1;
y=y1;

putpixel(x,y,7);

for(i=0;i<step;i++){
x=x+xinc;
y=y+yinc;

putpixel(x,y,7);

}

getch();
closegraph();






}