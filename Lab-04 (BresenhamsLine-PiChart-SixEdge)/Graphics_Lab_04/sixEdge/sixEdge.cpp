#include<conio.h>
#include <graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(200,60,"Six Edge");

   int cx = getmaxx()/2;
   int cy = getmaxy()/2;

   setfillstyle(3,RED);
   line(cx+100,cy,cx+50,cy-50);
   line(cx+100,cy,cx+50,cy+50);

   line(cx+50,cy+50,cx-50,cy+50);
   line(cx+50,cy-50,cx-50,cy-50);

   line(cx-100,cy,cx-50,cy+50);
   line(cx-100,cy,cx-50,cy-50);
   floodfill(cx,cy,WHITE);



   getch();
   closegraph();
   return 0;
}

