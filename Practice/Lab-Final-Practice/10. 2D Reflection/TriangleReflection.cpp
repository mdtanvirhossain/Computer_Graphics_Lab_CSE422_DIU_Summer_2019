#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    char a;

   //clrscr();

    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    printf("\n enter the coordinates of triangle");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    line(320,0,320,430);
    line(0,240,640,240);

    printf("\n Enter the axis of reflection");
    scanf("%d",&a);

    if(a=='x'||a=='X')
    {
        x1=x1;
        x2=x2;
        x3=x3;
        y1=y1+240;
        y2=y2+240;
        y3=y3+240;
    }
    else if(a=='y'||a=='Y')
    {
        y1=y1;
        y2=y2;
        y3=y3;
        x1+=320;
        x2+=320;
        x3+=320;
    }

    printf("\n triangle after reflection");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
