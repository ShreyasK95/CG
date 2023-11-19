#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, pk;
    float dx = x2 - x1;
    float dy = y2 - y1;

    printf("Enter x1 y1 x2 y2 \n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, "..//bgi");

    pk = (2 * dy) - dx;
    putpixel(x1, y1, 7);

        while(x1!=x2){

        if(pk>=0){
            x1=x1+1;
            y1=y1+1;
            putpixel(x1,y1,7);
	    delay(10);

            pk=pk+(2*dy)-(2*dx);
        }
        else{
            x1=x1+1;
            putpixel(x1,y1,7);                       
	    delay(10);

            pk=pk+(2*dy);

        }
    }
    


    getch();
    return 0;
}