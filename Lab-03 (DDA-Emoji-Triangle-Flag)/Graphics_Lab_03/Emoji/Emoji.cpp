#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(200,60,"Please Smile..");


   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   circle(250,200,150);
   floodfill(250,200,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   circle(190,150,20);
   floodfill(190,150,BLACK);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   circle(310,150,20);
   floodfill(310,150,BLACK);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   arc(250,198,200,340,90);
   arc(250,160,220,320,110);
   floodfill(250,286,BLACK);


   getch();
   closegraph();
   return 0;
}

