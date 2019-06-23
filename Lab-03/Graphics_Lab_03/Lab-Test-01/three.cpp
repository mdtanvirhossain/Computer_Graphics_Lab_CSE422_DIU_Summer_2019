#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Figure-03");

   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   line(60, 100, 400, 300);
   //vertical line
   line(60, 100, 100, 300);
   //bottom line
   line(100, 300, 400, 300);
   floodfill(70,110,YELLOW);




   getch();
   closegraph();
   return 0;
}


