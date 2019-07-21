#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setbkcolor(GREEN);

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;

   //outtext
   outtextxy(cx-100,60,"Hear Shape");
/*
   arc(cx,cy,110,360,100);
   arc(cx,cy,0,70,100);

   //bottom line
   line(cx-100,cy,cx,cy+100);
   line(cx+100,cy,cx,cy+100);

   //upper line

   line(cx,cy-50,cx-35,cy-90);
*/
    setcolor(GREEN);
    setfillstyle(1,GREEN);
    circle(50,50,40);
    circle(110,50,40);

    line(24,75,80,140);
    line(135,75,80,140);

    floodfill(50,50,GREEN);
    floodfill(110,50,GREEN);
    floodfill(80,50,GREEN);
    floodfill(80,100,GREEN);


   getch();
   closegraph();
   return 0;
}

