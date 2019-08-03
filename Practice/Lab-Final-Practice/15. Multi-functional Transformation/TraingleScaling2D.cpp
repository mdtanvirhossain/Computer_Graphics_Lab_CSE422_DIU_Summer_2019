#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm;
    int x,y,x1,y1,x2,y2,tx,ty;
    //clrscr();
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("\n Please enter first coordinate of the triangle= ");
    scanf("%d %d", &x,&y);
    printf("\n Enter second coordinate of the trinagle = ");
    scanf("%d %d",&x1,&y1);
    printf("\n Enter third coordinate of the triangle = ");
    scanf("%d %d",&x2,&y2);
    printf("\n\t\t********** TRIANGLE before & after translation ***********");
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    printf("\n Now enter the translation vector = ");
    scanf("%d %d",&tx,&ty);

    setcolor(RED);
    line(x*tx,y*ty,x1*tx,y1*ty);
    line(x1*tx,y1*ty,x2*tx,y2*ty);
    line(x2*tx,y2*ty,x*tx,y*ty);
    getch();
    closegraph();
    return 0;
}

