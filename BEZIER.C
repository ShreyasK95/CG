#include<stdio.h>
#include<graphics.h>
#include<math.h>

void bezier(int x[],int y[],int size){
    int gd=DETECT,gm;
    double t;
    int i;
    initgraph(&gd,&gm,"..//bgi");

    for(t=0.0;t<1.0;t+=0.0005){
	double xt=x[0]*pow(1-t,3)  +x[1]*3*t*pow(1-t,2)  +  x[2]*3*pow(t,2)*(1-t)  + x[3]*pow(t,3);
	double yt=y[0]*pow(1-t,3)  +y[1]*3*t*pow(1-t,2)  +  y[2]*3*pow(t,2)*(1-t)  + y[3]*pow(t,3);

	putpixel(xt,yt,7);
    }

    for(i=0;i<4;i++){
      putpixel(x[i],y[i],10);
    }
}

    int main()
    {
    int gd = DETECT,gm;
    int i;
    int x[4],y[4];

    printf("Enter X and Y coordinates of control points \n");

    for(i=0;i<4;i++)
    {
	scanf("%d%d",&x[i],&y[i]);
    }

    bezier(x,y,4);
    getch();
return 0;
}