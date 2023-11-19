#include<stdio.h>
#include<graphics.h>

float display(float xc,float yc,float x1,float y1,float r){
    putpixel(xc+x1,yc+y1,7);   //below
    putpixel(xc+y1,yc+x1,7);   //below   //2*r for sinoso

    putpixel(xc-x1,yc+y1,7); //below
    putpixel(xc-y1,yc+x1,7); // below

    putpixel(xc+x1,yc-y1,7);  // above
    putpixel(xc+y1,yc-x1,7);  //above

    putpixel(xc-x1,yc-y1,7);  //above
    putpixel(xc-y1,yc-x1,7);  //above


}

int main(){
    int gd=DETECT,gm;
    float x1,y1,xc,yc,r,dp;

    printf("Enter circle coordinates and Radius \n");
    scanf("%f%f%f",&xc,&yc,&r);
    initgraph(&gd,&gm,"..//bgi");
    x1=0;
    y1=r;

    dp=1-r;
    putpixel(x1,y1,7);
    while(y1>x1){
	if(dp<0){
	    x1=x1+1;
	    dp=dp+(2*x1)+3;
	}
	else{
	    x1=x1+1;
	    y1=y1-1;
	    dp=dp+(2*x1)-(2*y1)+5;
	}
	display(xc,yc,x1,y1,r);
    }

getch();
return 0;
}