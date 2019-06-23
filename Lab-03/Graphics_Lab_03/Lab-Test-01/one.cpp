#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Figure-01");

   setcolor(BLUE);
   setfillstyle(SOLID_FILL,YELLOW);
   line(100, 100, 400, 300);
   //vertical line
   line(100, 100, 100, 300);
   //bottom line
   line(100, 300, 400, 300);
   floodfill(110,110,BLUE);





   getch();
   closegraph();
   return 0;
}


