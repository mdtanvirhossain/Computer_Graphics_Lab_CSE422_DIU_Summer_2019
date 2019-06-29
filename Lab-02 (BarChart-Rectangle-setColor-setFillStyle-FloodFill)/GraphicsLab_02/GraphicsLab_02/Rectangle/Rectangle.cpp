#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"NATIONAL FLAG");

   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   rectangle(100,100,400,300);
   floodfill(250,200,GREEN);
   //rectangle(120,120,380,280);

   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   circle(250,200,50);
   floodfill(250,200,RED);

   setcolor(GREEN);
   // line for x1, y1, x2, y2
    line(100, 100, 100, 500);
    line(105, 100, 105, 500);

   getch();
   closegraph();
   return 0;
}
