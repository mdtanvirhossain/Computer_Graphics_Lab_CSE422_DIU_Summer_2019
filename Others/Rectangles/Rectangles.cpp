#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"RECTANGLE");

   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   rectangle(100,100,400,300);
   floodfill(250,200,GREEN);
   //rectangle(120,120,380,280);


   getch();
   closegraph();
   return 0;
}
