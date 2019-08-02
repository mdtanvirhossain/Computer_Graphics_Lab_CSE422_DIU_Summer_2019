#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //text output
   outtextxy(150,50,"Rectangle");
    setfillstyle(3,YELLOW);
   rectangle(100,200,500,400);
   floodfill(110,210,WHITE);




   getch();
   closegraph();
   return 0;
}


