#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Figure-04");

   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   line(200, 100, 300, 300);
   //vertical line
   line(200, 100, 100, 300);
   //bottom line
   line(100, 300, 300, 300);
   floodfill(280,290,GREEN);




   getch();
   closegraph();
   return 0;
}



