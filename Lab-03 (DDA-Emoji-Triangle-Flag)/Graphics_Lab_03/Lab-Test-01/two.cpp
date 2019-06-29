#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Figure-02");

   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   //right
   line(250, 100, 400, 300);
   //vertical line
   line(250, 100, 100, 300);
   //bottom line
   line(100, 300, 400, 300);
   floodfill(110,290,RED);




   getch();
   closegraph();
   return 0;
}




