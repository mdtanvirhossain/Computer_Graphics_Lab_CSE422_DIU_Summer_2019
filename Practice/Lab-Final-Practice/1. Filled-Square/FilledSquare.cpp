#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   //outtext
   outtextxy(150,60,"Filled square");

   setfillstyle(1,YELLOW);
   line(100,100,300,100);
   line(100,100,100,300);
   line(100,300,300,300);
   line(300,300,300,100);
   floodfill(110,110,WHITE);


   getch();
   closegraph();
   return 0;
}

