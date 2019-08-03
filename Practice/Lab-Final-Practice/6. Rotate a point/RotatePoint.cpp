#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm,x,y;
    double s,c, angle;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(RED);
    printf("Enter coordinates of line: ");
    scanf("%d%d",&x,&y);
    cleardevice();
    setbkcolor(WHITE);
    putpixel(x,y,RED);
    //getch();
    setbkcolor(BLACK);
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);
    //setbkcolor(WHITE);
    c = cos(angle *3.14/180);
    s = sin(angle *3.14/180);
    x = floor(x * c + y * s);
    y = floor(-x * s + y * c);

    cleardevice();
    setcolor(RED);
    putpixel(x,y,RED);
    //viewing the proper shape we can add 100 px to each other


    getch();
    closegraph();
    return 0;
}

