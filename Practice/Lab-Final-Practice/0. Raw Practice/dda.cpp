#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main (){
    float x,y,x1,y1,x2,y2,dx,dy,steps;
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");

    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);

    dx = abs(x2-x1);
    dy = abs(y2-y1);

    if(dx>dy){
        steps = dx;
    }
    else
        steps= dy;

    dx = dx/steps;
    dy = dy/steps;

    x = x1;
    y = y1;

    i=1;

    while(i<=steps){
        putpixel(x,y,GREEN);
        x = x+dx;
        y = y+dy;
        i++;
        delay(10);
    }

    getch();
    closegraph();
    return 0;
}

