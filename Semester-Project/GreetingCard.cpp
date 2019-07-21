#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;

   //setbkcolor(GREEN);

   setcolor(15);
   setfillstyle(1,15);
   rectangle(cx-250,5,cx+250,475);
   floodfill(cx,cy,15);

   setcolor(14);
   setfillstyle(1,14);
   rectangle(cx-250,420,cx+250,475);
   floodfill(cx-250,420,14);

   getch();
   closegraph();
   return 0;
}

