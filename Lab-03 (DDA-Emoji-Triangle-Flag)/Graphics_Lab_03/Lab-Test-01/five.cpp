#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Figure-05");

   setcolor(BLUE);
   setfillstyle(3,BLUE);
   line(140, 100, 400, 300);
   //vertical line
   line(140, 100, 100, 300);
   //bottom line
   line(100, 300, 400, 300);
   floodfill(150,110,BLUE);




   getch();
   closegraph();
   return 0;
}


