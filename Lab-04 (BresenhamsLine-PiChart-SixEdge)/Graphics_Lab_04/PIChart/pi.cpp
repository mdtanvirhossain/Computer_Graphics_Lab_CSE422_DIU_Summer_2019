#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"PI Chart");

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;


   setcolor(YELLOW);
   setfillstyle(1,YELLOW);
   arc(cx,cy,270,360,100);
   line(cx,cy,cx+100,cy);
   line(cx,cy,cx,cy+100);
   floodfill(cx+50,cy+50,YELLOW);

   setcolor(GREEN);
   setfillstyle(1,GREEN);
   arc(cx,cy,180,270,100);
   line(cx,cy,cx-100,cy);
   line(cx,cy,cx,cy+100);
   floodfill(cx-50,cy+50,GREEN);

   setcolor(RED);
   setfillstyle(1,RED);
   arc(cx,cy,0,180,100);
   line(cx,cy,cx+100,cy);
   line(cx,cy,cx-100,cy);
   floodfill(cx-50,cy-50,RED);



   getch();
   closegraph();
   return 0;
}
