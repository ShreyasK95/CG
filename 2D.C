#include<stdio.h>
#include<graphics.h>
#include<math.h>


void translate(){
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    int tx,ty;
    printf("Enter coordinates of Triangle \n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    
    printf("Enter translating factors \n");
    scanf("%d%d",&tx,&ty);
    initgraph(&gd,&gm,"C://TURBOC3//BGI");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    line(x1+tx,y1+ty,x2+tx,y2+ty);
    line(x2+tx,y2+ty,x3+tx,y3+ty);
    line(x3+tx,y3+ty,x1+tx,y1+ty);
}

void scale(){
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    int sx,sy;
    int xr,yr;
    
    int x1n=xr+((x1-xr)*sx);
    int x2n=xr+((x2-xr)*sx);
    int x3n=xr+((x3-xr)*sx);

    int y1n=yr+((y1-yr)*sy);
    int y2n=yr+((y2-yr)*sy);
    int y3n=yr+((y3-yr)*sy);
    
    printf("Enter coordinates of Triangle \n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    
    printf("Enter scaling factors \n");
    scanf("%d%d",&sx,&sy);
    
    printf("Enter reference point coordinates\n");
    scanf("%d%d",&xr,&yr);
    initgraph(&gd,&gm,"C://TURBOC3//BGI");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);


    line(x1n+200,y1n,x2n+200,y2n);
    line(x2n+200,y2n,x3n+200,y3n);
    line(x3n+200,y3n,x1n+200,y1n);
}


void rotate(){
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    int xr,yr;
    float theta;
    float r=0.01744*theta;
    
    int x1n=xr+((x1-xr)*cos(r)-(y1-yr)*sin(r));
    int x2n=xr+((x2-xr)*cos(r)-(y2-yr)*sin(r));
    int x3n=xr+((x3-xr)*cos(r)-(y3-yr)*sin(r));

    int y1n=yr+((x1-xr)*sin(r)+(y1-yr)*cos(r));
    int y2n=yr+((x2-xr)*sin(r)+(y2-yr)*cos(r));
    int y3n=yr+((x3-xr)*sin(r)+(y3-yr)*cos(r));
    
    printf("Enter coordinates of Triangle \n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    printf("Enter reference point coordinates\n");
    scanf("%d%d",&xr,&yr);
    
    printf("enter the value of theta \n");
    scanf("%f",&theta);

    initgraph(&gd,&gm," ");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    line(x1n+200,y1n,x2n+200,y2n);
    line(x2n+200,y2n,x3n+200,y3n);
    line(x3n+200,y3n,x1n+200,y1n);
}

int main(){
    int gd=DETECT,gm;
    int op;
    printf("Select operation\n");
    printf(" 1.Translation \n 2.Rotation \n 3.scaling \n");

    scanf("%d",&op);
    switch(op){
        case 1:translate();
        break;

        case 2:rotate();
        break;

        case 3:scale();
        break;

        default: 
        printf("Enter valid operation \n");
        break;
    }

    getch();
    return 0;
}